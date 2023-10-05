#include<stdio.h>
#include<conio.h>
int main()
{
    int num1, num2;
    printf("Enter The First Number :");
    scanf("%d",&num1);
    printf("Enter The Second Number :");
    scanf("%d",&num2);
    num1 = num1 + num2;
    num2 = num1- num2;
    num1 = num1 - num2;
    printf("The First Number Is : %d",num1);
    printf("\nThe Second Number Is : %d",num2);
    return 0;
}