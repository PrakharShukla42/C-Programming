#include<stdio.h>
#include<string.h>
void main()
{
    char a[10]="Prakhar";
    int l;
    strrev(a);
    l=strlen(a);
    printf("Length = %d",l);
    printf("\n%s",a);
}