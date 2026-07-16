#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp,*fp1;
	char ch;
	//clrscr();
	fp = fopen("input.text","w");
	printf("\n Enter the contents of the file press cntrl+z when finish: ");
	while((ch=getchar())!=EOF)
		putc(ch,fp);
	fclose(fp);
	fp = fopen("input.text","r");
	fp1 = fopen("output.text","w");
	while((ch=getc(fp))!=EOF)
		putc(ch,fp1);
	fclose(fp);
	fclose(fp1);
	fp1 = fopen("output.text","r");
	printf("The contients of the copied file: ");
	while((ch=getc(fp1))!=EOF)
	printf("%c",ch);
	fclose(fp1);
	return 0;
}