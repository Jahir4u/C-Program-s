#include<stdio.h>
int main()
{
    int i,j;
    for(i=4;i<=5;i++)
    {
        for(j=10;j<=30;j++)
        {
            if(i==j)
            continue;
            printf("%d%d\n",i,j);
        }
    }
    return 0;
}