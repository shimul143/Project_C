#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,c,R,S;
	printf("type valu of a:");
	scanf("%d",&a);
	printf("\n");
	printf("type valu of b:");
	scanf("%d",&b);
	printf("\n");
	printf("type valu of c:");
	scanf("%d",&c);
	R=(-b+sqrt(b*b-4*a*c))/(2*a);
	printf("%d\n",R,S);
	S=(-b-sqrt(b*b-4*a*c))/(2*a);
	printf("%d\n",R,S);
	getch();
        return 0;
       

}             