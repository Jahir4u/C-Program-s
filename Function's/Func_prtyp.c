#include<stdio.h>
#include<conio.h>
void main()
{
    int square(int);
    int a,b,c;
    printf("Enter a number: ");
    scanf("%d", &a,c);
    b = square(a);
    c = qube(a);
    printf("The square is: %d",b);
    printf("\nThe qube is: %d",c);
    getch();
}int square(int x)
{
    int result;
    result = x * x;
    return (result);
}
int qube(int x)
{
    int result;
    result = x*x*x;
    return (result);
}
