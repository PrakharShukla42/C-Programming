#include<stdio.h>
#include<conio.h>
int main()
{
    float farenheit, celcius;
    printf("Enter The Temperature In Farenheit :");
    scanf("%f",&farenheit);
    celcius = (0.56) * (farenheit - 32);
    printf("Temperture In Degree Celcius :");
    scanf("%f",&celcius);
    return 0;   
}