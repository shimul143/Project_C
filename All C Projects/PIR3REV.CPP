#include<stdio.h>
#include<conio.h>
int main()
{
	//clrscr();
	int i,j,k,r;
	printf("How many number have you use in the piramid:");
	scanf("%d",&r);
	for(i=r;i>=1;i--)
	{
		for(j=0;j<=r-i;j++)
		{
                	printf(" ");
		}
		for(k=i;k>0;k--)
		{
                	printf(" *");
		}
                printf("\n");
	}
	getch();
        return 0;
}
