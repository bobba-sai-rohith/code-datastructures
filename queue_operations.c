#include<stdio.h>
#include<stdlib.h>
int queue[50];
int front=-1;
int rear=-1;
void enqueue(int x)
{
	if(rear!=50)
	{
		rear++;
		queue[rear]=x;
	}
	else
	printf("queue is full");
}
int dequeue()
{
	if(front!=rear)
	{
		front++;
		return queue[front];
	}
	else
	return -1;
}
int isempty()
{
	if(front==rear)
	{
		return 1;
	}
	else
	return 0;
}
int isfull()
{
	if(rear==50)
	{
		return 1;
	}
	else
	return 0;
}
void display()
{
	int i;
	if(!isempty())
	{
		for(i=front+1;i<=rear;i++)
		{
			printf("%d",queue[i]);
		}
	}
	else
	printf("queue is empty");
	
}
int main()
{
	int ch,x,p;
	while(1)
	{
		printf("\nenter choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nenter the element to enqueue\n");
				scanf("%d",&x);
				enqueue(x);
				break;
		   case 2:
		   	        p=dequeue();
		   	        if(p!=-1)
					printf("dequeued element is %d",p);
					else
					printf("queue is empty");
					break;
					case 3:
						if(isempty())
						printf("queue is empty");
						else
						printf("queue is not empty");break;
				   case 4:
				   	   if(isfull())
				   	   printf("queue is full");
				   	   else
				   	   printf("\nqueue is not full");break;
				   	   
				   	   	case 5:
				   	   		display();break;
				   	   		case 6:
				   	   			exit(0);
				   	   			default:
				   	   				printf("enter chooice detween 1 to 6");
				   	   				break;
		}
	}
	return 0;
}


