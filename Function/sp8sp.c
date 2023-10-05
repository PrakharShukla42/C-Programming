#include <stdio.h>
int main() {
    int size;
    printf("Enter the size of the password: ");
    scanf("%d", &size);
    printf("Enter the digits of the password: ");
    int digits[size],correct=1;
    for (int i=0;i<size;i++) {
        scanf("%d", &digits[i]);
    }
    for (int i=0;i<size;i++) {
        for (int j=i+1;j<size;j++) {
            if (digits[i] == digits[j]) {
                correct=0;
                break;
            }
        }
        if (!correct) {
            break;
        }
    }
    if (correct) {
        printf("Correct\n");
    } else {
        printf("Not Correct\n");
    }
    return 0;
}
