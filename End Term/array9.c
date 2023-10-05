#include<stdio.h>
void main()
{
    int arr[4][5],i,j;
    printf("Elements :");
    for (i=0;i<4;i++)
        for (j=0;j<5;j++)
            scanf("%d",&arr[i][j]);
    for (i=0;i<4;i++)
        for(j=0;j=5;j++)
            printf("%d ",arr[i][j]);
}