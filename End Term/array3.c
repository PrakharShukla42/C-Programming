#include<stdio.h>
void main()
{
    int arr[20],i,even=0,odd=0;
    for (i=0;i<20;i++)
    {
        printf("Enter The Value Of Array[%d] : ",i);
        scanf("%d",&arr[i]);
        if (arr[i]%2==0)
            even++;
        else
            odd++;
    }
    printf("Even Numbers Are = %d\n",even);
    printf("Odd Numbers Are = %d\n",odd);
}