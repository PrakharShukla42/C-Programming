#include<stdio.h>
int main()
{
    int a[]={1,2,2};
    int temp,res;
    for (int i=0;i<3;i++)
    {    
        temp=0;
        for(int j=i;j<3;j++)
        {
            temp+=a[j];
            res+=temp;
        }
    }
    printf("%d",res);

}