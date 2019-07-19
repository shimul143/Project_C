#include<stdio.h>
int main()
{
    int m[10][10],i,j,k=1,row,col;
    int tem[20],in[20],x=1,li[30],z=1;
    printf("enter row:");
    scanf("%d",&row);
    printf("\nenter col:");
    scanf("%d",&col);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            printf("enter %d no row of %d no col:" ,i,j);
            scanf("%d",&m[i][j]);
        }
        printf("\n");
    }
    printf("\nthe matrix is:\n");
    for(i=1;i<=row;i++)
      {
          for(j=1;j<=col;j++)
        {
            printf("%d\t",m[i][j]);
        }
        printf("\n");
      }

    printf("\nthe first digonal is:\n");
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            if(i==j)
            {
                tem[k++]=m[i][j];
                in[x++]=((row*(row+1))/2)-((row-i+1)*((row-i+2))/2)+j-i+1;
                printf("%4d",m[i][j]);
            }
        }
    }
    printf("\nthe lower digonal:\n");
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            if(j>i)
            {
                tem[k++]=m[i][j];
                in[x++]=((row*(row+1))/2)-(((row-i+1)*(row-i+2))/2)+j-i+1;

                printf("%4d",m[i][j]);
            }
        }
    }
    printf("\n\nThe lenar array becomes:\n");
    for(i=1;i<=k-1;i++)
    {
        for(j=1;j<=k-1;j++)
        {
            if(j==in[i])
            {
                li[j]=tem[z];
                z++;
            }


        }
    }
    for(i=1;i<=k-1;i++)
    {
        printf("%4d",li[i]);
    }
     x=1;
    printf("\nthe sqare matris:\n");
    for(i=row;i>=1;i--)
    {
        for(k=i;k<row;k++)
        printf(" ");
        for(j=1;j<=i;j++)
        {
            printf("%2d",li[x]);
            x++;
        }
        printf("\n");
        for(z=1;z<=row-i+1;z++)
        printf(" ");

    }
    getch();
    return 0;
}
