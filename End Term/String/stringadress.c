#include<stdio.h>
#include<string.h>
void main()
{
    char str[]="India";
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        printf("Character = %c\t",str[i]);
        printf("Address = %p\n",&str[i]);
    }
}