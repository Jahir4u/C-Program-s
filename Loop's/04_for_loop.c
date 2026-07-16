#include<stdio.h>
#include<conio.h>
int main()
{
    char op,choice;
    do{
    int i, num;
    printf("\nEnter a number: ");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
        {
            printf("%d*%d=%d\n",num,i,num*i);
        }
        printf("\nDo you want another calculation (y/n): ");
        scanf(" %c",&choice);

    }
    while (choice == 'Y' || choice == 'y');
    return 0;
}