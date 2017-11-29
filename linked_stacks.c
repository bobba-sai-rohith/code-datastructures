include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
}*head=NULL;
struct node*temp;
void push(int x)
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
	new->next=head;
	head=new;
	new->data=x;
}
}
int pop()
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
				push(x);
				break;
			case 2:
				x=pop();
				if(x!=-1)
				printf("deleted elemnt is %d",x);
				else
				printf("pop operation cant be performed as list is empty");
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

	

