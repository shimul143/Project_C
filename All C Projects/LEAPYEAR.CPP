#include<stdio.h>
#include<conio.h>
int main()
{
//	clrscr();
	int year;
	printf("please enter a year(like 1952):\n");
	scanf("%d",&year);
	if(((year%4)==0)&&((year%100)!=0)||((year%400)==0))
	printf("%d is a LEAP YEAR.\n",year);
	else
	printf("%d is not a LEAP YEAR.\n",year);
	getch();
	return 0;
}
