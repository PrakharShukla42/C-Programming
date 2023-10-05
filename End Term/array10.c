#include<stdio.h>
void main()
{
    int m,n;
    printf("Enter Rows : ");
    scanf("%d",&m);
    printf("Enter Column : ");
    scanf("%d",&n);
    int mat[m][n],i,j;
    printf("Elements Of MAtrix (%dx%d) row-wise : \n",m,n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("The Matrix That You Have To Entered Is :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%5d",mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}