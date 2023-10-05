#include<stdio.h>
void main()
{
    int i,arr[10]={2,5,6,7,8,9,12,35,54,1},small,large;
    small=large=arr[0];
    for(i=1;i<10;i++)
    {
        if (arr[i]<small)
            small=arr[i];
        if (arr[i]>large)
            large=arr[i];
    }
    printf("Smallest = %d , Largest = %d ",small,large);

}
