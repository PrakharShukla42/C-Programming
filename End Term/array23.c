#include <stdio.h>
int main() {
    int arr[]={1,2,2};
    int n=3;
    int sum=0;
    for(int i=0;i<n;i++) 
    {
        sum+=arr[i]*(n-i)*(i+1);
    }
    printf("The Sum Of All Subarray is %d", sum);
    return 0;
}
