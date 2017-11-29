#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
}*head=NULL;

struct node*temp;
void enqueue(int x)
{
	if(head==NULL)
	{
	
	struct node*new;
	new=(struct node*)malloc(sizeof(struct node));
	head=new;
	new->data=x;
	new->next=NULL;
}
else
{
	struct node*new;
	new=(struct node*)malloc(sizeof(struct node));
	for(temp=head;temp->next!=NULL;)
	{
		temp=temp->next;
	}
	temp->next=new;
	new->next=NULL;
	new->data=x;
}
}
int dequeue()
{
	int x;
	
	if(head!=NULL)
	{
		temp=head;
		x=temp->data;
		head=head->next;
	
	free(temp);
	return x;
    }
    else
    printf("list is empty");
    return -1;
}
void display()
{
	if(head!=NULL)
	{
	
	for(temp=head;temp!=NULL; )
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}}
	else
	printf("list is empty");
}
int main()
{
	int ch,x;
	while(1)
	{
		printf("enter choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter element");
				scanf("%d",&x);
				enqueue(x);
				break;
			case 2:
				x=dequeue();
				if(x!=-1)
				printf("deleted elemnt is %d",x);
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("enter 1 to 4");
				break;
				
		}
	}
	return 0;
}

	

