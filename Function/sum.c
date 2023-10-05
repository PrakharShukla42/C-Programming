#include<stdio.h>
int sum(int x,int y,int z);
void main()
{
    int a,b,c,d;
    scanf("%d %d %d:",&a,&b,&c);
    d=sum(a,b,c);
    printf("%d",d);
}
int sum(int x,int y,int z)
{
    int d;
    d=x+y+z;
    return (d);
}