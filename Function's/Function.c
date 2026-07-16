#include<stdio.h>
#include<conio.h>
 int square (int no)
 {
    int result;
    result = no*no;
    return(result);
 }
 int cube (int no)
 { 
  int result;
   result = no*no*no;
   return(result);
 }
 void main()
 {
    int sq,cb,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    sq = square(n);
    cb = cube(n); 
    printf("the square is: %d",sq);
    printf("\nthe cube is: %d",cb);
    getch();
 }