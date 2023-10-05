#include<stdio.h>
void main()
{
    int m,n;
    printf("Enter Rows : ");
    scanf("%d",&m);
    printf("Enter Column : ");
    scanf("%d",&n);
    int mat1[m][n],mat2[n][m],mat3[m][n],i,j;
    printf("Elements Of Matrix 1 (%dx%d) row-wise : \n",m,n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Elements Of Matrix 2 (%dx%d) row-wise : \n",m,n);
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            mat3[i][j]=mat1[j][i]+mat2[i][j];
        }
    }
    printf("Addtion Of Matrix That You Have To Entered Is :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%2d",mat3[i][j]);
        }
        printf("\n");
    }
}
