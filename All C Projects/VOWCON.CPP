#include<stdio.h>
#include<conio.h>
int main()
{
	clrscr();
	char d;
	printf("Enter upper case alphabet:");
	scanf("%c",&d);
	if(d==65||d==69||d==73||d==79||d==85)
	{
         printf("upper case vowel\n");
	}
	else
	{
         printf("upper case consonent\n");
	}                                  
	getch();
        return 0;
}                                                              