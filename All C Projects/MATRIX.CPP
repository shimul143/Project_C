#include<stdio.h>                                                      
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
                printf("\n");
	}
	printf("Enter a operator:\n");
        scanf("%*c%c",&x);
	printf("\nEnter the value of 2nd matrix:");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
                	scanf("%d",b[i][j]);
		}
                printf("\n");
	}
	printf("\nyour 1st matrix is:");
	for(i=0;i<r1;i++)
	{                                                         
		for(j=0;j<c1;j++)
		{
                	printf("%d",a[i][j]);
		}
                printf("\n");
	}
	printf("\n\n");
        printf("\nyour 2nd matrix is:");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
                	printf("%d",b[i][j]);
		}
                printf("\n");
	}
	printf("\n\n");

	if(x=='+')
	{
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
                        	c[i][j]=a[i][j]+b[i][j];	
			}
		}
	
	}
	else if(x=='-')
	{
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				c[i][j]=a[i][j]-b[i][j];
			}
                }
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
                	printf("%d",c[i][j]);
		}
	}
	printf("\n\n");
	getch();
        return 0;
}                                   

