#include<stdio.h>
#include<conio.h>
int main()
{
    int num1 = 3,num2 = 5;
    printf("\n Initial Value Of Num1 = %d and num2 = %d",num1, num2);
    num1 += num2 * 4 - 7;
    printf("\n Ater The Evalution Of The Expression num1 = %d and num2 = %d",num1, num2);
    return 0;
}