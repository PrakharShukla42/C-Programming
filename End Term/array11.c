#include<stdio.h>
void main()
{
    int m,n;
    printf("Enter Rows : ");
    scanf("%d",&m);
    printf("Enter Column : ");
    scanf("%d",&n);
    int mat1[m][n],mat2[n][m],i,j;
    printf("Elements Of Matrix (%dx%d) row-wise : \n",m,n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            mat2[i][j]=mat1[j][i];
        }
    }
    printf("Transpose Of Matrix That You Have To Entered Is :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%5d",mat2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}