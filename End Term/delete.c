#include<stdio.h>
void main()
{
    int size,pos,num;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    for (int i =0;i<size;i++)
       {
        printf("Enter the element:");
        scanf("%d",&num);
        arr[i] = num;
       }
        printf("Enter the position:");
        scanf("%d",&pos);
        if (pos>=size)
           printf("Position does not exist in array...");
        else
           arr[pos] = 0;
    for (int i = 0;i<size;i++)
        printf("%d ",arr[i]);
}
/*a[i]=a[i-1]*/