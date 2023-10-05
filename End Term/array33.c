#include<stdio.h>
void main()
{
    int arr[5]={5,10,15,20,25};
    int i;
    for(i=0;i<5;i++)
    {
        printf("Value Of arr[%d] = %d\t",i,arr[i]);
        printf("Address Of arr[%d] = %p\n",i&arr[i]);
    }

}