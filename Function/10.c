#include<stdio.h>
#include<conio.h>
long int factorial(int n);
int main(void)
{
    int num;
    printf("Enter A Number : ");
    scanf("%d",&num);
    if(num<0)
    {
        printf("No Factorial Of Negative Number\n");
    }
    else
    {
        printf("Factorial Of %d is %ld\n",num,factorial(num));
    }
    return 0;
}
long int factorial(int n)
{
    int i;
    long int fact=1;
    if(n==0)
    {
        return 1;
    }
    for (i=n;i>1;i--)
        fact*=i;
    return fact;
}