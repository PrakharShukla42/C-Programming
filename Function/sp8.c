#include <stdio.h>

int isPasswordValid(int password[], int size) {
    int digitCount[10] = {0}; // Array to count the occurrence of each digit

    for (int i = 0; i < size; i++) {
        if (digitCount[password[i]] > 0) {
            // If a digit is repeated, the password is not valid
            return 0;
        }
        digitCount[password[i]]++;
    }

    return 1; // If no repeated digits are found, the password is valid
}

int main() {
    int size;
    printf("Enter the size of the password: ");
    scanf("%d", &size);

    int password[size];
    printf("Enter the password digits separated by spaces: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &password[i]);
    }

    if (isPasswordValid(password, size)) {
        printf("Correct\n");
    } else {
        printf("Not Correct\n");
    }

    return 0;
}
