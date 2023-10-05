#include<stdio.h>
int main()
{
    int i;
    printf("Size Of Array : ");
    scanf("%d",&i);
    int j,arr[i];
    for(j=0;j<i;j++)
    {
        printf("Enter The Elements Of Array[%d] : ",j);
        scanf("%d",&arr[j]);
    }
    for(j=i;j>0;j--)
    {
        printf("%d\n",arr[j]);
    }
return 0;
}