#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float a,b,c,area,S;
    printf("\n Enter The Lengths Of The Three Sides Of The Triangle :");
    scanf("%f %f %f",&a, &b, &c);
    S=(a+b+c)/2;
    area=sqrt(S*(S-a)*(S-b)*(S-c));
    printf("\n Area = %f",area);
    return 0;
}