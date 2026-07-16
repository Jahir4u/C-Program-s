#include<stdio.h>
#include<conio.h>
void main()
{
    int age=0;
    printf("Enter the age: ");
    scanf("%d",&age);
    if(age>18)
    {
        printf("person is adult");
    }
    else
    {
        printf("person is minor");
    }
    getch();
}