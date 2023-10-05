#include <stdio.h>
#include <string.h>
int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    char names[n][50];
    for (int i=0;i<n;i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s",names[i]);
    }
    for (int i=0;i<n-1;i++) {
        for (int j=0;j<n-i-1;j++) {
            if (strcmp(names[j],names[j+1]) > 0) {
                char temp[50];
                strcpy(temp, names[j]);
                strcpy(names[j],names[j+1]);
                strcpy(names[j+1],temp);
            }
        }
    }
    printf("Sorted names:\n");
    for (int i=0;i<n;i++) {
        printf("%s\n",names[i]);
    }
    return 0;
}
