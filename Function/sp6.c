#include <stdio.h>
#include <string.h>
int main() {
    char str1[50];
    char str2[50];
    printf("Sample Input :\n");
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str1[strcspn(str1,"\n")]='\0';
    str2[strcspn(str2,"\n")]='\0';
    int len1=strlen(str1);
    int len2=strlen(str2);
    printf("Sample Output :\n");
    if (len1>len2) {
        printf("%s\n",str1);
    } else if (len2>len1) {
        printf("%s\n", str2);
    } else {
        printf("Both strings have the same number of characters.\n");
    }
    return 0;
}
//strcspn - function used to determine intial segment of string it does not contaian value of its own.......
