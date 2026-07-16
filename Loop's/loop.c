#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 2; i <= n/2; i++)
        if(n % i == 0) 
        { 
            sum= 1; 
        }
    if(sum== 0 && n > 1)
        printf("Prime");
    else
        printf("Not Prime");

    getch();
}
