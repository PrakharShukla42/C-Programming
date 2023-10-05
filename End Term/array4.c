#include<stdio.h>
void main()
{
    int i;
    printf("Enter The Value Of Elements You Want To Enter : ");
    scanf("%d",&i);
    int arr[i],j,even=0,odd=0;
    for (j=0;j<i;j++)
    {
        printf("Value Arr[%d] : ",j);
        scanf("%d",&arr[i]);
        if (arr[i]%2==0)
            even++;
        else
            odd++;
    }
    printf("Even %d , Odd %d ",even,odd);

}