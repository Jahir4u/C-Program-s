#include<stdio.h>
int main()
{
    char another;
    do
    {
        int num,sum;
        printf("\nEnter a number: ");
        scanf("%d",&num);
        //printf("square of %d is %d\n",num,num*num);
        sum = num*num;
        printf("\nThe squre is: %d",sum);
        printf("\nwant to another number (y/n): ");
        fflush(stdin);
        scanf("%c",&another);   
    }while (another == 'y');
 return 0;   
}