#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
}*head;
struct node*temp;
void create(int x)
{
	struct node*new;
	if(head==NULL)
	{
		new=(struct node*)malloc(sizeof(struct node));
		head=new;
		new->data=x;new->next=NULL;
		
	}
	else
	{
		for(temp=head;temp->next!=NULL;)
		{
			temp=temp->next;
		}
		new=(struct node*)malloc(sizeof(struct node));
		temp->next=new;
		new->data=x;
		new->next=NULL;
	}
	
}
void display()
{
	for(temp=head;temp!=NULL; )
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
int main()
{
	int x;
	while(1)
	{
		printf("enter element");
		scanf("%d",&x);
		if(x!=-999)
		{
			create(x);
			
		}
		else
		break;
	}
	display();
	return 0;
	
}
