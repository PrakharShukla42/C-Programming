#include<stdio.h>
#include<conio.h>
int main()
{
    int num1, num2, num3, large;
    printf("\n Enter The First Number :");
    scanf("%d",&num1);
    printf("\n Enter The Second Number :");
    scanf("%d",&num2);
    printf("\n Enter The Third Number :");
    scanf("%d",&num3);
    large = num1>num2?(num1>num3?num1:num3):(num2>num3?num2:num3);
    printf("\n The Largest Number Is : %d",large);
    return 0;
}