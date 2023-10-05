#include<stdio.h>
#include<conio.h>
void find(int n);
int main(void)
{
    int num;
    printf("Enter A Number : ");
    scanf("%d",&num);
    find(num);
    return 0;
}
void find(int n)
{
    if (n%2==0)
    {
        printf("%d Is Even Number\n",n);
    }
    else 
    {
        printf("%d Is Odd Number\n",n);
    }
}