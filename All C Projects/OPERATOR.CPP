#include<stdio.h>
#include<conio.h>
int main()
{
	clrscr();
	int a,b,sum,sub,mul,div;                                                              
        char c;
	printf("Enter your first number:\n");
	scanf("%d",&a);
	printf("Enter your second number:\n");
	scanf("%d",&b);
	printf("Enter your operator:\n");
        scanf("%d",&c);
	if(c=='+')
	{
	 sum=a+b;
         printf("%d+%d=%d",a,b,sum);
	}                              

	else if(c=='-')
	{                                                                                              
	 sub=a-b;
         printf("%d-%d=%d",a,b,sub);
	}
	else if(c=='*')
	{
	 mul=a*b;
         printf("%d*%d=%d",a,b,mul);
	}
	else if(c=='/')
	{
	 div=a/b;
         printf("%d/%d=%d",a,b,div);
	}
	getch();
        return 0;
}