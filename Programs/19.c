#include<stdio.h>
#include<conio.h>
int main()
{
    int num,digit_at_ones_place;
    printf("\n Enter Any Number :");
    scanf("%d",num);
    digit_at_ones_place = num % 10;
    printf("\n The Digit At Ones Place Of %d is %d",num,digit_at_ones_place);
    return 0;
}