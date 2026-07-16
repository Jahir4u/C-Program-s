#include<stdio.h>
#include<conio.h>
void main() 
{
    int num1, num2, sum;
    float result;
    printf("Enter the first number : ");
    scanf("%d", &num1);
    printf("Enter the second  number : ");
    scanf("%d", &num2);
    sum = num1 / num2;
    printf("Sum = %d\n", sum);
    if (num2 == 0)
    {
        printf("Error: Division by zero is not allowed.\n");
    }
    else
    {
        result = (float)num1 / num2;
        printf("Result = %f", result);
    }
    getch();
}