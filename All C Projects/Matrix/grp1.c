#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

void insertAtBeginning(int n);
void insertAtEnd(int n);
int delfrmBegining(void);
int delfrmEnd(void);
void searchList(int n);
void printList(void);

struct myNode{
    int data;
    struct myNode *link;
};

struct myNode *head;

int main(void)
{
    int option, num, termination;

    termination = FALSE;
    while(TRUE){
	printf("\nEnter your option:\n");
	printf(" 1 to insert a new number at the beginning\n");
	printf(" 2 to insert a new number at the end\n");
	printf(" 3 to search for a number\n");
	printf(" 4 to display the list\n");
	printf(" 5 to delete a number from begining of the list\n");
	printf(" 6 to delete a number from end of the list\n");
	printf(" 7 to quit the program\n");

	scanf("%d", &option);
	switch(option){
		case 1:
				scanf("%d", &num);
				insertAtBeginning(num);
				break;
	    case 2:
				scanf("%d", &num);
				insertAtEnd(num);
				break;
		case 3:
				scanf("%d", &num);
				searchList(num);
				break;
		case 4:
				printList();
				break;
		case 5:
                num=delfrmBegining();
                printf("%d",num);
                break;
        case 6:
                num=delfrmEnd();
                printf("%d",num);
                break;

        case 7:
                termination = TRUE;
				break;
	}
	if(termination){
		break;
	}
    }
    return 0;
}

void insertAtBeginning(int n)
{
   struct myNode *m;
   m=(struct myNode*)malloc(sizeof (struct myNode));

   m->data=n;
   m->link=head;
   head=m;

    return;
}

void insertAtEnd(int n)
{
  struct myNode *temp,*m,*r;
  temp=(struct myNode*)malloc(sizeof (struct myNode));
  temp=head;
  m->data=n;
  while(temp->link!=NULL)
  {
      r=temp;
      temp=temp->link;

  }
  if(temp->link==NULL) temp->link=m;
  m->link=NULL;
  return;
}


int delfrmBegining(void)
{
    int n;
   struct myNode *temp;
   temp=(struct myNode*)malloc(sizeof (struct myNode));
    temp=head;
   n=temp->data;
    head=temp->link;
   free(temp);
    return n;
}

int delfrmEnd(void)
{
    int n;
   struct myNode *temp,*r;
   temp=(struct myNode*)malloc(sizeof (struct myNode));
   r=(struct myNode*)malloc(sizeof (struct myNode));

   temp=head;
   while(temp->link!=NULL)
   {
       r=temp;
       temp=temp->link;
   }
   n=temp->data;
   free(temp);
   r->link=NULL;

    return n;
}
void searchList(int n)
{
  int found=0;
  struct myNode *temp,*r;
  temp=(struct myNode*)malloc(sizeof (struct myNode));
  temp=head;
  //r->data=n;
  while(temp!=NULL)
  {
        if(n==temp->data)
        {
            printf("found");
            found=1;
        }


      temp=temp->link;


  }
  if(found==0)printf("not found");

  return;
}

void printList(void)
{
   struct myNode *q;

   q=(struct myNode*)malloc(sizeof (struct myNode));
   q=head;
   if(q!=NULL)
   {
   printf("Display Linked List :\n%d",q->data);
	 q=q->link;
   }
   else
    printf("Display Linked List :\n NULL");

   while(q!=NULL) {
	 printf("-> %d",q->data);
	 q=q->link;

      }
    return;
}




