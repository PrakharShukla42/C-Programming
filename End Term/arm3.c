#include <stdio.h>
#include <conio.h>
#include<math.h>
int main ()
{
int num,orn,rem,sum=0,a=0;
printf ("Number : " );
scanf ("%d",&num );
orn=num;
while (orn!=0) 
{
    orn=orn/10;
    a++;
}
orn=num;
while(orn!=0 ) 
{
    rem=orn%10;
    sum=sum+pow(rem,a);
    orn/=10;
}

printf("%d",sum);
/*if (sum==num) 
{
    printf ("%d is an Armstrong number",num );
}
else
{
    printf ("%d is not an Armstrong number",num );
}*/
return 0;
}