#include<stdio.h>
#include<math.h>
void main()
{
    int num,orn,rev=0,rem;
    printf("Number :");
    scanf("%d",&num);
    orn=num;
    while(num>0)
    {
        rem=num%10;
        rev=rev+(pow(rem,rem));
    }
    printf("%d",rev);
}