#include<stdio.h>
#include<conio.h>
int main()
{
	clrscr();
	char d;
	printf("Enter your letter/number:");
	scanf("%c",&d);
	if(d>=65&&d<=90)
	{
         printf("your input was letter\n");
	}
	else if(d>=97&&d<=122)
	{
	 printf("your input was letter\n");
	}
	else if(d>=48&&d<=57)
	{
         printf("your input was number\n");
	}
	else
	{
	 printf("your input was wrong\n");
	}
	getch();
        return 0;
}