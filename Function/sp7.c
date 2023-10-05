#include<stdio.h>
int main(){
int i=8,*p,**q,***r;// address of i=100,p=200,q=300,r=400
 p=&i;
q=&p;
r=&q;
printf("%d %d  %d %d",i,*p,**q,***r);
return 0;}
