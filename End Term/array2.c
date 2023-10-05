#include<stdio.h>
void main()
{
    int arr[10],i,sum=0;
    float avg;
    for(i=0;i<10;i++)
    {
        printf("Enter The Value Of arr[%d] : ",i);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    avg = sum/10;
    printf("Sum Of All The Elements Of Array Is : %d\n",sum);
    printf("Average = %d : ",avg);

}