#include<stdio.h>
void main()
{
    int a=0,b=1,i,n;
    int nt=a+b;
    printf("Enter The Number : ");
    scanf("%d",&n);
    printf("Fabonnaci Series : %d %d",a,b);
    for (i=3;i<=n;i++)
    {
        printf(" %d",nt);
        printf(" ");
        a=b;
        b=nt;
        nt=a+b;
    }

}