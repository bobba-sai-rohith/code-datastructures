#include<stdio.h>
#include<stdlib.h>
int stack[50];
int top=-1;
void push(int x)
{
	if(!isfull())
	{
		top++;
		stack[top]=x;
	}
	else
	printf("stack is full");
}
int pop()
{
	if(!isempty())
	{
		return stack[top--];
	}
	else
	return -1;
}
int isempty()
{
	if(top==-1)
	return 1;
	else
	return 0;
}
int isfull()
{
	if(top==19)
	{
		return 1;
	}
	else
	return 0;
}
void peep()
{
  if(top!=-1)
	printf("\n%d",stack[top]);
}
void display()
{
	int temp;
	if(!isempty())
	{
		for( temp=top;temp!=-1;)
		{
			printf("\n%d",stack[temp--]);
		}
	}
	else
	printf("stack is empty");
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
				printf("\nenter the element to push\n");
				scanf("%d",&x);
				push(x);
				break;
		   case 2:
		   	        p=pop();
		   	        if(p!=-1)
					printf("popped element is %d",p);
					else
					printf("stack is empty");
					break;
					case 3:
						if(isempty())
						printf("stack is empty");
						else
						printf("stack is not empty");break;
				   case 4:
				   	   if(isfull())
				   	   printf("stack is full");
				   	   else
				   	   printf("\nstack is not full");break;
				   	   case 5:
				   	   	peep();break;
				   	   	case 6:
				   	   		display();break;
				   	   		case 7:
				   	   			exit(0);
				   	   			default:
				   	   				printf("enter chooice detween 1 to 7");
				   	   				break;
		}
	}
	return 0;
}
