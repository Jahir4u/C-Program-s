#include<stdio.h>
#include<conio.h>
void main()
{
    int num=0,rem=0,temp=0,sum=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num>0)
    {
        rem = num % 10;
        temp = num / 10;
        sum = sum + rem;
        num = temp;
    }
    printf("The summation is: %d\n", sum);
    getch();
}