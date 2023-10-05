#include<stdio.h>
void main()
{
    int arr[5],i;
    printf("Enter 5 Elements Of Array : ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
}