#include<stdio.h>
#include<conio.h>
void main()
{
    char ch = 'A';
    int i,j,row;
    printf("Enter the no's of row's: ");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
        printf("%c\t",ch);
        ch++;
        } 
        printf("\n");
    }
    getch();
}