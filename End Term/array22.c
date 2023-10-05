#include<stdio.h>
long int SubArraySum(int arr[], int n)
{
    long int result = 0, temp = 0;
    for (int i = 0; i < n; i++) {
        temp = 0;
        for (int j = i; j < n; j++) {
            temp += arr[j];
            result += temp;
        }
    }
    return result;
}