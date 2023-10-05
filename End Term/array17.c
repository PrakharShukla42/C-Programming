#include<stdio.h>
void main( )
{
int  a[20], i, n, ele, pos ;
printf("Enter the Numbers of elements: ") ;
scanf("%d ",& n) ;
printf("Enter the elements of array : \n") ;
for (i=1;i<=n;i++)
scanf("%d ",&a[i]) ;
printf("Array enter by user are :\n") ;
for (i=1;i<=n;i++)
printf("%d \t",a[i],"\n");
printf("Enter the position you want to enter :");
scanf("%d ",& pos);
printf("Enter the element you want to enter :");
scanf("%d ",& ele);
for (i=1;i<=n;i++)
{
if (i>pos)
    a[i]=a[i-1] ;
else
{
    if (i==pos )
    a[i]=ele ;
else
    a[i] = a[i] ;
}
}
printf("Array After Inserting element :\n") ;
for (  i = 1 ; i <=n ; i++)
    printf("%d \t",a[i]) ;

}