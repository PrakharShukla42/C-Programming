#include<stdio.h>
#include<conio.h>
int main()
{
    float radius;
    double area , circumference;
    printf("\n Enter The Radius Of the CIrcle :");
    scanf("%f",&radius);
    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;
    printf("Area = %.21e",area);
    printf("\n Circumference = %.2e",circumference);
    return 0;
}