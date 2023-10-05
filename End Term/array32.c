#include<stdio.h>
void main()
{
    char a='x', *p1=&a;
    char b=12, *p2=&b;
    char c=12, *p3=&c;
    double d=18.34, *p4=&d;
    printf("Adress Of p1 = %d\n",p1);
    printf("Adress Of p2 = %d\n",p2);
    printf("Adress Of p3 = %d\n",p3);
    printf("Adress Of p4 = %d\n",p4);
    printf("Size Of (p1) = %u\n",sizeof(p1));
    printf("Size Of (p1) = %u\n",sizeof(*p1));
    printf("Size Of (p2) = %u\n",sizeof(p2));
    printf("Size Of (p2) = %u\n",sizeof(*p2));    
    printf("Size Of (p3) = %u\n",sizeof(p3));
    printf("Size Of (p3) = %u\n",sizeof(*p3));
    printf("Size Of (p4) = %u\n",sizeof(p4));
    printf("Size Of (p4) = %u",sizeof(*p4));
}