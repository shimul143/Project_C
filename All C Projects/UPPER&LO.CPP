#include<stdio.h>
#include<conio.h>
int main()
{
	clrscr();
	char a;
	printf("Enter your letter:");
	scanf("%c",&a);
	if(a>=65&&a<=90)
	{
         printf("your letter was upper case alphabet\n");
	}
	else if(a>=97&&a<=122)
	{
         printf("your letter was lower case alphabet\n");
	}
	else
	{
         printf("your input was wrong\n");
	}
	getch();
	return 0;
}