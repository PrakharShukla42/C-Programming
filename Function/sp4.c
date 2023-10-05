#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter integers: ");
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int Even=0;
    int Odd=0;
    for (int i=0;i<n;i++) {
        if (arr[i]%2==0) {
            Even+=arr[i];
        } else {
            Odd+=arr[i];
        }
    }
    int diff=Odd-Even;
    printf("The absolute difference between the sum of even elements and sum of odd elements is: %d\n", diff);
    return 0;
}
