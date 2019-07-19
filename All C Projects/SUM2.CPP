#include<stdio.h>
#include<conio.h>
int main()
{
	clrscr();
	int a,b,sum,sub,ml,de,p;
	printf("type any number:");
	scanf("%d",&a);
	printf("type another number:");
	scanf("%d",&b);
	sum=a+b;
	sub=a-b;               
	ml=a*b;
	de=a/b;
        p=a%b;
	printf("%d+%d=%d\n",a,b,sum);
	printf("%d_%d=%d\n",a,b,sub);
	printf("%d*%d=%d\n",a,b,ml);
	printf("%d/%d=%d\n",a,b,de);
	printf("%d%%d=%d\n",a,b,p);
	getch();
        return 0;

}