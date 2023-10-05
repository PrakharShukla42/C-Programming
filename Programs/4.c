#include<stdio.h>
int main()
{
    int num;
    float amt;
    char code;
    double pi;
    long int population_of_india;
    char msg[10];
    printf("\n Enter The Value Of Num :");
    scanf("%d",&num);
    printf("\n Enter The Vslue Of Amount :");
    scanf("%f",&amt);
    printf("\n Enter Value Of PI :");
    scanf("%e",&pi);
    printf("\n Enter The Population Of India :");
    scanf("%ld",&population_of_india);
    printf("\n Enter The Value Of Code :");
    scanf("%c",&code);
    printf("\n Enter The Message :");
    scanf("%s",&msg);
    printf("\n NUM = %d\n AMT = %f \n CODE = %c \n PI = %e \n POPULATION OF INDIA = %ld \n MESSAGE = %s",num,amt,code,pi,population_of_india,msg);
}