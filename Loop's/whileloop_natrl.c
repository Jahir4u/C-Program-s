#include<stdio.h>
#include<conio.h>
void main()
{
    int fno = 1, lno;
    printf("Enter the last number: ");
    scanf("%d", &lno);

    while (fno <= lno)
    {
        printf("%d\t", fno);
        fno++;
    }
    getch();
}