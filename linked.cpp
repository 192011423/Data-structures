#include <stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
}*head=NULL,*p,*t,*newnode;

void create()
{
	int x,n,i;
	printf("enter n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
    	printf("enter the value");
    	scanf("%d",&x);
	    newnode=(struct node*)malloc(sizeof(struct node));
	    newnode->data=x;
    	newnode->next=NULL;
    	if(head==NULL)
	    {
        head=newnode;
        p=newnode;
        }
    else{
      for(p=head;p->next!=NULL;p=p->next);
      p->next=newnode;
      p=newnode;
	}
}
}

void display()
{
	if(head==NULL)
		printf("SLL is Empty");
	else
		for(p=head;p!=NULL;p=p->next)
			printf("%d ->", p->data);
}





void insert_at_end()
{
    int x;
    printf("Enter the value");
    scanf("%d",&x);
}
int main()
{
	int choice;
	do{
	
	printf("\n main Menu\n");
	printf("1. Create \n2. Display \n3. Exit");
	printf("\nEnter Choice : ");
	scanf("%d", &choice);
	switch(choice)
	{
	case 1: create();
				break;
	case 2:
			display();
				break;
	case 3: insert_at_end();
				break;
	case 4:
			exit(0);
				break;
	default:
			printf("Invalid Choice. \n");
	}		
	}while(choice>0 && choice<=3);
}
