#include<stdio.h>
#include<conio.h>
#define COLMAX 10
#define ROWMAX 12
int main()
{
	clrscr();
	int row,column,x;
        row=1;     /*Initializing */
	printf("            MULTIPLICATION TABLE     \n");
	printf("------------------------------------------\n");
	do
	{
		column=1;  /* Initializing */
		do
		{
			x=row*column;
			printf("%4d",x);
			column++;     /*Incrementing*/
		}
		while(column<=COLMAX);   /*Testing*/
		printf("\n");
                row++;          /*Incrementing*/
	}
	while(row<=ROWMAX);      /*Testing*/
	printf("------------------------------------------\n");
	getch();
        return 0;
}