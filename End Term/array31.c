#include <stdio.h>
void main() {
   int arr[]={4,0,2,1}; 
   int n=sizeof(arr)/sizeof(arr[0]);;
   int sum1=n*(n+1)/2; 
   int  sum2=0; 
   for (int i=0;i<n;i++) {
      sum2+=arr[i]; 
   }
   int m=sum1-sum2;
   printf("Sum = %d\n",sum2);
   printf("The Missing Term is : %d",m);
}
