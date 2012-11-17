//A simple progrm using queue as linked list
//www.facebook.com/sparshj
#include<stdio.h>
#include<malloc.h>
#include<conio.h>
#include<stdlib.h>
	struct q_node
	{int data;
	struct q_node *next;
	} ;
struct q_node *temp,*rear,*front;
void rearadd();
void frontdel();
void display();
	int main()
	{		int ch;
			
		while(1)
	       {
			printf("\n1 to add\n2 to delete\n3to exit");
			scanf("\n%d",&ch);
			switch(ch)
			{	case 3 :exit(0);
				break ;
				case 1:rearadd();display();
				break;
				case 2:frontdel();
				break;
			}
	       }
getch();
return 0;
	}
	void rearadd()
	{
	int num;
	temp=(struct q_node *)malloc(sizeof(struct q_node));

	printf("\nEnter the number you want to add to rear");
	scanf("%d",&num);
	if(rear==NULL)
	{
	temp->data=num;
	temp->next=NULL;
	rear=temp;
	front=rear;
	}
	else
	{
	temp->data=num;
	temp->next=NULL;
	rear->next=temp;
	rear=temp;

	return;
       }

      }
	 void frontdel()
	 { temp=front;
	 printf("deleteing....%d",front->data);
	 front=front->next;
	 printf("deleted\n now queue looks like this");    display();
	 free(temp);
	 }
	 void display()
	 {printf("\ninside display\n");
	  temp=front;

	  while(temp!=NULL)
	  {printf("%5d",temp->data);
	  temp=temp->next;
	  }
	 }

