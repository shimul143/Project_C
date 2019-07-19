#include<stdio.h>

int main()
{

	int i ,j,k,r;
        printf("How many number you have in the piramid:");
	scanf("%d",&r);
	for(i=r;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(k=0;k<=r-i;k++)
		{
                	printf(" *");
		}
		printf("\n");
	}

        return 0;
}
