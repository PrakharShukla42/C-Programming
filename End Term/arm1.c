#include<stdio.h>
#include<math.h>
void main()
{
    int num,orn,rev=0,rem,a,n,dig;
    printf("Number :");
    scanf("%d",&num);
    orn=num;
    while(n){
        dig += 1;
        n /= 10;
    }
    while(num)
    {
        rem=num%10;
        a=pow(rem,rem);
        rev=rev+a;
        num/=10;
    }
    if(orn==rev)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not A Armstrong");
    }

}