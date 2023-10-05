#include<stdio.h>
#include<conio.h>
int main()
{
    long int num1 = 1234567,num2, diff=0;
    printf("\n Enter The Number :");
    scanf("ld",&num2);
    diff = num1 - num2;
    printf("\n Difference = %ld",diff);
    return 0;
}