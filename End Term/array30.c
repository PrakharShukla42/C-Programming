//C Program To Find Missing Element In An Disorted Array Without Using Loop
#include <stdio.h>
int main() 
{
    int arr[] = {4,0,2,1};
    int n = 5;
    int j = 0;
    printf("Missing elements in the given array are: ");
    for (int i=arr[0];i<=arr[n-1];i++)
    {
        if (i == arr[j]) 
        {
            j++;
        } 
        else 
        {
            printf("%d ", i);
        }
    }
    return 0;
}