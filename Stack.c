#include<stdio.h>
#include<stdlib.h>
 
#define MAX 5 
 
int top=-1;
int stack[MAX];
int push();
int pop();
int display();
int underflow();
int overflow();
 
void main()
{
    
    
    
int status;
int ch;
while(1)
{
printf("\n\n1.Push\n2.Pop\n3.Display\n4.Exit");
printf("\n\nEnter your choice(1-4):");
scanf("%d",&ch);
switch(ch)
{
case 1: status = push();
        if(status==1)
            printf("\nElement inserted successfully");
        break;
case 2: status = pop();
        if(status==1)
            printf("\nElement deleted successfully");
        break;
case 3: status = display();
        if(status==1)
            printf("\nElement displayed successfully");
        break;
case 4: exit(0);
default: printf("\nWrong Choice!!");
}
}
}

int overflow()
{
    if(top==MAX-1)
        return 0;
    return 1;
}

int underflow()
{ 
    if(top <= -1)
        return 0;
    return 1;
}

int push()
{
int i,val;

i=overflow();
if(i==0)
    printf("\n  Stack Overflow");
else 
{
    printf("\nEnter element to push:");
    scanf("%d",&val);
    
    stack[top]=val;
    top++;
    return 1;
}
}
 
int pop()
{ int i;
i=underflow();
if(i==0)
    printf("\n  Stack Underflow");
else 
{
    printf("\nDeleted element is %d",stack[top]);
    top=top-1;
    return 1;
}
}
 
int display()
{
int i;
i=underflow();
if(i==0)
    printf("\n  Stack is Empty");
else 
{
printf("\nStack is...\n");
for(i=top;i>=0;i--	)
printf("%d\n",stack[i]);

    return 1;
}
}



