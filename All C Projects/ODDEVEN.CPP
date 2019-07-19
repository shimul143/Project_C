#include<stdio.h>
#include<conio.h>
int main()
{
	//clrscr();
	int a;
	printf("Enter your number:");
	scanf("%d",&a);
	if(a%2==0)
	{
         printf("your number was even number\n");
	}
	else
	{
         printf("your number was odd number\n");
	}
	getch();
        return 0;
}
