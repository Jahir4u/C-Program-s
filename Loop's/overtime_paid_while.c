#include<stdio.h>
#include<conio.h>

int main()
{
    char op, choice;
    do
    {
        float otpay;
        int hour, i=1;
        printf("\nEnter the number of days in 30 day's: ");
        scanf("%d",&hour);
        if(hour>=8)
        {
            otpay=(hour-24)*400;
        }
        else
        {
            otpay=0;
        }
            printf("hours = %d Overtime pay = Rs.%f\n",hour,otpay);
            i++;
        printf("\nDo you want to continue this calculation (Y/N): ");
        scanf(" %c",&choice);
    }
    while(choice == 'Y' || choice == 'y');
    return 0;
}