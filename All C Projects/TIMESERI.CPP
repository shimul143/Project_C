#include<stdio.h>
#include<conio.h>
int main()
{
	clrscr();
	int i,n,c;
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
	 c=n*i;
	 printf("%d+%d=%d\n",n,i,c);
	}
	getch();
        return 0;






       
}