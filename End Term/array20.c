#include <stdio.h>
int subArray(int arr[], int n)
{
    int result = 0;
    int i =0,j=0, k= 0;
    for (i=0; i <n; i++)
    {
        for (j=i; j<n; j++)
        {
            for (k = i ; k <= j ; k++)
            {
                result += arr[k];
            }
        }
    }
    return result ;
}
