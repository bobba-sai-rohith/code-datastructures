#include<stdio.h>
#include<stdlib.h>
char Exp[20];
char stack[20];
int top=-1;
void push(char x)
{
	if(top!=19)
	{
		top++;
		stack[top]=x;
	}
}
char pop()
{
	if(top!=-1)
	{
		return stack[top--];
	}
}
int prec(char x)
{
	if(x=='^')
	return 3;
	else if(x=='*'||x=='/')
	return 2;
	else 
	return 1;
}
int main()
{
	int i;char x,p;
	printf("enter the expression");
	scanf("%s",&Exp);
	for(i=0;Exp[i]!='\0';i++)
	{
		x=Exp[i];
		if(isdigit(x))
		{ 
		printf("%c",x);
		
		}
		else if(x=='(')
		{
			push(x);
		}
		else if(x==')')
		{
			while((p==pop())!='(')
			{
				printf("%c",p);
			}
			
		}
		else
		{
			if(top==-1)
			{
				push(x);
			}
			else if(prec(x)>prec(stack[top]))
			{
				push(x);
			}
			else
			{
				while((prec(x)<=prec(stack[top]))&&top!=-1)
				{
					printf("%c",pop());
				}
				push(x);
			}
		}
		
	}
	while(top!=-1)
	{
		printf("%c",pop());
	}
	return 0;
}
