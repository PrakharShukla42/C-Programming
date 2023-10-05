#include<stdio.h>
void main()
{
    int i;
    printf("Size Of Array : ");
    scanf("%d",&i);
    int arr[i],j,sum=0;
    for (j=0;j<i;j++)
    {
        printf("Value Of Arr[%d] : ",j);
        scanf("%d",&arr[j]);
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d  ",arr[j]);
    }
}