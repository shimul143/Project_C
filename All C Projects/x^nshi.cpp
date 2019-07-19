#include<stdio.h>
#include<conio.h>
int main()
{
	clrscr();
	int x,n,i,m;
	printf("type valu of x:\n");
	scanf("%d",&x);
	printf("type power if x:\n");
	scanf("%d",&n);
	m=1;
	i=1;
        while(i<=n)
	{
		m=m*x;
		i++;
	}
        printf("your (x^n) is: %d\n",m);
	getch();
        return 0;
}