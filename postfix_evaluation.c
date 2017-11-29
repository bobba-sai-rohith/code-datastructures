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
int main()
{
	int i;char x;int op1;int op2,result;
	printf("enter expression");
	scanf("%s",&Exp);
	for(i=0;Exp[i]!='\0';i++)
	{
		x=Exp[i];
		if(isdigit(x))
		{
			push(x-48);
		}
		else
		{
			op1=pop();
			op2=pop();
			switch(x)
			{
				case '+':
					result=op2+op1;
					break;
					case '-':
						result=op2-op1;break;
						case '*':
							result=op2*op1;break;
							case'/':
								result=op2/op1;
								break;
								default :
									break;
			}
			push(result);	
								
			
		}
	}
	printf("result of post fix expression is %d",pop());
return 0;
}
	
