#include<stdio.h>
void main()
{
    int i;
    printf("Size Of Array : ");
    scanf("%d",&i);
    int arr[i],j;
    for(j=0;j<i;j++)
    {
        printf("Enter Element Array[%d] : ",j);
        scanf("%d",&arr[j]);
    }
    for(j=4;j>0;j--)
    {
        printf("%d\n",arr[j]);
    }
}