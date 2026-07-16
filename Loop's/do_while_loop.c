#include<stdio.h>
#include<conio.h>
void main()
{
    int fno=1,lno;
    printf("Enter the last number: ");
    scanf("%d", &lno);
    do
    {
        printf("%d\t",fno);
        fno=fno+1;
    } while (fno <= lno);
  
    getch();
}