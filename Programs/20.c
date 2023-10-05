#include<stdio.h>
#include<conio.h>
int main()
{
    int num1, num2, temp;
    printf("Enter The First Number :");
    scanf("%d",&num1);
    printf("Enter The Second Number :");
    scanf("%d",&num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("\n The First Number is %d",num1);
    printf("\n The Second Number is %d",num2);
    return 0;
}