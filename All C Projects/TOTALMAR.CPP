#include<stdio.h>
#include<conio.h>
#define FIRST 360
#define SECOND 240
int main()
{
	clrscr();
	int n,m,i,j,roll_number,marks,total;
	printf("Enter number of student and subjects:\n");
	scanf("%d%d",&n,&m);
	printf("\n");
	for(i=1;i<=n;i++)
	{
		printf("Enter roll_number:\n");  
		scanf("%d",&roll_number);
		total=0;
		printf("\nEnter marks of %d subjects for ROLL NO:\n",m,roll_number);
		for(j=1;j<=m;j++)
		{
			scanf("%d",&marks);
			total=total+marks;
		}
	       	printf("TOTAL MARKS=%d",total);
	       /*	if(total>=FIRST)
		printf("(first division)\n\n");
		else if(total>=SECOND)
		printf("(second division)\n\n");
		else
                printf("(***fail***)\n\n");  */

	}
	getch();
        return 0;
}                                 