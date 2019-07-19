#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NULL 0
typedef struct loser list;
int c_list(list *com);
list *del(list *com,int a);
list *find_del(list *com,char name[10]);
void dis(list *com,int c);
struct loser
{
    char n[10];
    struct loser *foroward;
}

main()
{
    list *start;
    int a;
    start=(list*)malloc(sizeof(list));
    a=c_list(start);
    start=del(start,a);
    dis(start,a);
    getch();
}

int c_list(list *com)
{
    static int c=0;
    printf("name:");
    gets(com->n);
    if(strcmp(com->n,"end")==0)com->foroward==NULL;
    else
    {
        com->foroward=(list*)malloc(sizeof(list));
        c++;
        c_list(com->foroward);
    }
    return c;
}
list *del(list *com,int a)
{
    list *tem;
    char na[10];
    printf("enter the name:");
    gets(na);
    if(strcmp(na,com->n)==0)
    {
        tem=com->foroward;
        free(com);
        com=tem;
        return com;
    }
    else
    {
        com=find_del(com,na);
        return com;
    }

}
list *find_del(list *com,char name[10])
{
    if(com->foroward->foroward!=NULL)
    {
        if(strcmp(name,com->foroward->n)==0)
        {
            com->foroward=com->foroward->foroward;
            return com;
        }
        else
        {
            find_del(com->foroward,name);
        }


    }
    return com;
}

void dis(list *com,int c)
{
   static int i;
    for(i=0;i<c;i++)
    {
        if(com->foroward->foroward!=NULL)
        {
               printf("%s\n",com->n);
               dis(com->foroward,c);

        }

    }


}
