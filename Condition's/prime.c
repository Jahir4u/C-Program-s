#include <stdio.h>
#include<conio.h>
void main()
{
    int n,i,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%1==0)
        {
            sum=1;
        }
    }
    if(sum==0)
            printf("%d is peime number",n);
    else
            printf("%d is not a prime number",n);
    getch();
}
