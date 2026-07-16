#include<stdio.h>
#include<conio.h>
void main()
{
    int a=98, b=55, c=68, d=76;
    char ch = 'a';
    printf("Enter a charectera: ");
    scanf("%d",&a);
    if(a>b && a>c && a>d)
    {
        printf("The greatest of all is: %d",a);
    }
    else if(b>a && b>c && b>d)
    {
        printf("The greatest of all is: %d",b);
    }
    else if(c>a && c>b && c>d)
    {
        printf("The greatest of all is: %d",c);
    }
    else if(d>a && d>b && d>c)
    {
        printf("The greatest of all is: %d",d);
    }
    getch();
}