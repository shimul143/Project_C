#include<stdio.h>
#include<conio.h>
int main()
{
	clrscr();
	int n,i,flog;
	printf("Type valu of n:\n");
	scanf("%d",&n);
	flog=0;
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)
		{
			flog=1;
                        break;
		}
	}
	if(flog==1)
	{
        	printf("not prime");
	}
	else
	{
        	printf("prime");
	}
	getch();
        return 0;
}