#include<stdio.h>
#include<conio.h>
int main()
{
	clrscr();
	int count;
	printf("first loop\n\a");
	for(count=1;count<=15;count++)
	{
		printf("%4d",count);
        }
	printf("\nsecond loop\n\a");
	for(count=1;count<=10;count++)
	{
		printf("%4d",count);
	}
	printf("\nthird loop\n\a");
	for(count=100;count<=5;count++)
	{
		printf("%4d",count);
        }
	getch();
        return 0;
}




