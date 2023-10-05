#include<stdio.h>
void main()
{
    int i;
    printf("Size Of Array : ");
    scanf("%d",&i);
    int arr[i],j;
    for(j=0;j<i;j++)
    {
        printf("Enter elements of Array : ");
        scanf("%d",&arr[j]);
    }
    printf("Array Before Deletion\n");
    for(j=0;j<i;j++)
    {
        printf("%d\n",arr[j]);
    }
    int k;
    printf("Enter Index You Want To Delete : ");
    scanf("%d",&k);
    for(j=i-1;j>k-1;j--)
    {
        arr[j]=arr[j+1];
    }
    i--;
    printf("Array After Deletion Is : ");
    for(j=0;j<i;j++)
    {
        printf("%d",arr[j]);
    }

}