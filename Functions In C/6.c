#include<stdio.h>
#include<conio.h>
int larger(int x,int y);
int main(void)
{
    int x,y;
    printf("Enter Two Numbers : ");
    scanf("%d %d",&x,&y);
    printf("Larger Number = %d\n",larger(x,y));
    return 0;
}
int larger(int x,int y)
{
    return x>y?x:y;
}