#include<stdio.h>
#include<conio.h>
int sum(int x,int y);
int main(void)
{
    int a,b,s;
    printf("Enter Values Of a And b : ");
    scanf("%d%d",&a,&b);
    s=sum(a,b);
    printf("Sum Of %d And %d Is %d\n",a,b,s);
    return 0;
}
int sum(int x,int y)
{
    int s;
    s=x+y;
    return s;
}