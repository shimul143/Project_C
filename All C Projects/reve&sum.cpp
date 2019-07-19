#include<stdio.h>
#include<conio.h>
int main()
{
	clrscr();
	int i,j,n,m,k,l;
	printf("Enter a integer number:\n");
	scanf("%d",&n);
	m=n;
	k=0;
	while(i!=0)
	{
		j=n%10;
		i=n/10;
		n=i;
                k=k*10+j;
	}
	l=m+k;
       	printf("%d+\n---\n%d\n",k,l);
	getch();
        return 0;
}