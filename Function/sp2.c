#include <stdio.h>
int main() {
    int arr[5]={1,2,3,4,5};
    int x[5];
    for (int i=0;i<5;i++) {
        x[i] = arr[i];
    }
    int sum = 0;
    for (int i=0;i<5;i++) {
        sum+=x[i];
    }
    while (sum>=10) {
        int temp=sum;
        sum=0;
        while (temp!= 0) {
            sum+=temp%10;
            temp/=10;
        }
    }
    printf("%d\n", sum);
    return 0;
}
