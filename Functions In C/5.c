#include<stdio.h>
#include<conio.h>
void selection(int age,float ht);
int main(void)
{
    int age;
    float ht;
    printf("Enter The Age And Height : ");
    scanf("%d %f",&age,&ht);
    selection(age,ht);
    return 0;
}
void selection(int age,float ht)
{
    if (age>25)
    {
        printf("Age Should Be Less Than 25\n");
        return;
    }
    if(ht<5)
    {
        printf("Height Sholud Be More Than 5\n");
        return;
    }
    printf("Selected\n");
}