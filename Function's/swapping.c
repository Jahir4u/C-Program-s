#include<stdio.h>
#include<conio.h>
void main()
{
    int swapno(int*x,int*y);
    int fno,sno;
    printf("Enter the number: ");
    scanf("%d\t%d",&fno,&sno);
    printf("No's before swapping: %d\t%d",fno,sno);
    swapno(&fno,&sno);
    getch();
}
swapno(int*x,int*y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("\nAfter swapping %d\t%d",*x,*y);
}