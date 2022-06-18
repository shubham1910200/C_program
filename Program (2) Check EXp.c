#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int top = -1;
char stack[100];
 
void push(char);
void pop();
void check_top();
 
void main()
{
	int i;
	char exp[100];
	printf("enter expression\n");
	scanf("%s",&exp);
	for (i = 0; exp[i] != '\0';i++)
	{
		if (exp[i] == '(')
		{
			push(exp[i]);
		}
		else if (exp[i] == ')')
		{
			pop();
		}
		else if (exp[i] == '[')
		{
			push(exp[i]);
		}
		else if (exp[i] == ']')
		{
			pop();
		}
		else if (exp[i] == '{')
		{
			push(exp[i]);
		}
		else if (exp[i] == '}')
		{
			pop();
		}
	}
	check_top();
}
 
// to push elements in stack
void push(char a)
{
	stack[top] = a;
	top++;
}
 
// to pop elements from stack
void pop()
{
	if (top == -1)
	{
		printf("expression is invalid\n");
		exit(0);
	}	
	else
	{		
		top--;
	}
}
 
// to find top element of stack
void check_top()
{
	if (top == -1)
		printf("\nexpression is valid\n");
	else
		printf("\nexpression is invalid\n");
}
