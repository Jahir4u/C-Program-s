#include <stdio.h>
#include<stdio.h>
void main() 
{
    FILE *fp;
    fp = fopen("test.txt", "w");
    if (fp == NULL) 
    {
        printf("File cannot be opened!");
    } else {
        printf("File opened successfully in write mode.");
        fclose(fp);
    }
}
