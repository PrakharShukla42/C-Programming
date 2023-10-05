#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    double n,s;
    printf("Enter The Number : ");
    scanf("%lf",&n);
    s=sqrt(n);
    printf("Square Root Of %.2lf Is %.2lf\n",n,s);
}