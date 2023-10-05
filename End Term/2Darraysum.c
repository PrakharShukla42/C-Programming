#include<stdio.h>
void main()
{
    int s=0;
    int r,c,i,j;
    printf("Enter Row & Column Size = ");
    scanf("%d %d",&r,&c);
    int a[r][c];
    printf("Enter Values = ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            s=s+a[i][j];
        }
        printf("Sum = %d",s);
    } 
}