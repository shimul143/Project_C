#include<stdio.h>
#include<conio.h>
int main()
{
	clrscr();
	int i,j,r1,r2,c1,c2,a[10][10],b[10][10],c[10][10];
        char x,y;
	printf("Enter 1st matrix row & column:\n");
	scanf("%d%d",&r1,&c1);
	printf("\nEnter 2nd matrix row & column:");
	scanf("%d%d",&r2,&c2);
        printf("\nEnter the value of 1st matrix:");
	for(i=0;i<r1;i++)
	{
        	for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
                }
	}
	printf("The sum is:%d\n",sum);
	getch();
        return 0;
}                                   
