#include<stdio.h>
#include<conio.h>
void main()
{
    int fact(int);
    int num,result;
    printf("Enter the number: ");
    scanf("%d",&num);
    result = fact (num);
    printf("the Factorial is: %d",result);
    getch();
}
fact(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else
    {
        return(n*fact(n-1));
    }
}