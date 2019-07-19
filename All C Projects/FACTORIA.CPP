#include<stdio.h>
#include<conio.h>
int main()
{
	clrscr();
	int i,a,c;
	printf("Enter a integer number:\n");
	scanf("%d",&a);
        c=0;
	for(i=0;i<=a;i++)
	{
		c=c+i;
        } 
	printf("Factorial=%d\n",c);
	getch();
        return 0;
}                                   
