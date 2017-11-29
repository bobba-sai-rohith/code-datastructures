#include<stdio.h>
#include<stdlib.h>
char stack[50];
int top=-1;
char Exp[50];
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
int isempty()
{
	if(top==-1)
	return 1;
	else
	return 0;
}
int main()
{
	int i;char x;
	printf("enter an infix expression");
	scanf("%s",&Exp);
	for(i=0;Exp[i]!='\0';i++)
	{
		x=Exp[i];
		if(!isdigit(x))
		{
			if(x=='{'||x=='['||x=='(')
			{
				push(x);
			}
			else if(x=='}')
			{
				if(pop()!='{')
				{
					printf("mismatched paranthesis\n");
					exit(0);
				}
			}
			else if(x==')')
			{
				
			  if(pop()!='(')
				{
					printf("mismatched paranthesis\n");
					exit(0);
				}
			}
			else if(x==']')
			{
				if(pop()!='[')
				{
					printf("mismahched paranthesis");
					exit(0);
				}			
			}
			
		}
	}
	if(isempty())
	{
		printf("expression is balanced");
	}
	else
	printf("paranthesis not found");
	return 0;
}
