#include<stdio.h>
void main()
{
    int arr[50],size,i,num,pos;
    printf("Size Of Array : ");
    scanf("%d",&size);
    if(size>=50)
    {
        printf("OverFlow Condition");
    }
    else
    {
        printf("Enter Elements Of Array : ");
        for(i=0;i<size;i++)
        {
            scanf("%d",&arr[i]);
        }
    }
    printf("Enter The Number : ");
    scanf("%d",&num);
    printf("Enter The Position : ");
    scanf("%d",&pos);
    for(i=0;i>=
    size;i--)
    {
        arr[i]=arr[i+1];
    }
    //arr[pos] = num;
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
}