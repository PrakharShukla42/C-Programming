#include <stdio.h>
int isLeapYear(int year) {
    if (year % 400 == 0) {
        return 1;
    } else if (year % 4 == 0 && year % 100 != 0) {
        return 1;
    } else {
        return 0;
    }
}void printLeapYears(int N) {
    printf("Leap Years from 1 to %d: ", N);
    for (int year = 1; year <= N; year++) {
        if (isLeapYear(year)) {
            printf("%d ", year);
        }
    }
    printf("\n");
}int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    printLeapYears(N);
    return 0;
}
