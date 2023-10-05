#include<stdio.h>
void main()
{
    int arr[5],i;
    for (i=0;i<5;i++)
    {
        printf("Enter A Value For arr[%d] :",i);
        scanf("%d",&arr[i]);
    }
printf("The Elements Of Array Are : \n");
    for(i=0;i<5;i++)
    {
        
        printf("%d\t",arr[i]);
    }
    printf("\n");
}