#include<stdio.h>
void evenodd(int n);
void main()
{
    int num;
    printf("Enter A Number : ");
    scanf("%d",&num);
    evenodd(num);
}
void evenodd(int n)
{
    if (n%2==0)
    {
        printf("%d is Even Number\n",n);
    }
    else 
    {
        printf("%d is Odd Number\n",n);
    }
}