// a link list program implemented stack in c  made by sparsh jain
// fore more contact www.facebook.com/sparshj
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct s_node
{ int data ;
 struct s_node *next;
}*top;
struct s_node *temp;
void pushdata( );
void display();
void pop();

int main()
{
while(1)
{
int choice;
printf("\nWhat is the action you want to perform\n  \n 1 for push \n 2 for pop \n 3 for exit \n \t");
scanf("\n%d",&choice) ;
	switch(choice)
	{


	case 1:  pushdata();  display();
	break ;
	case 3:
	exit(0);
	break;
	case 2:
	pop();

	}
}return 0;
getch();
}
void pushdata()
{
int num ;
 printf("\n enter the value at respected postion" );
scanf("%d",&num);
temp=(struct s_node *)malloc(sizeof(struct s_node)) ;

	if(top==NULL)
	{
	temp->data=num;
	temp->next=NULL;
	top=temp;
	}
	else{
	temp->data=num ;
	temp->next=top;
	top=temp;
	}

}
void display()
{
 temp=top;
		while(temp!=NULL)
		{
		printf("\t%5d",temp->data);
		temp=temp->next;
		}
}
void pop()
{ if(top==NULL)
    {printf("there should be some item in stack to get deleted");
               }
     temp=top;
printf("\n \t pooping top....");
printf("\n item deleted is %d\n",top->data);
top=top->next;
printf("Now your stack looks like this----->");
display();

 free(temp)     ;
}

