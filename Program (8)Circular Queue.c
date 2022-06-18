/* --------------------------Circular Queue---------------------------*/
#include<stdio.h>
#include<stdlib.h>
 
#define MAX 5 
 
int f=-1;
int r=-1;


int cqueue[MAX];
int enqueue();
int dequeue();
int traverse();
int IsEmpty();
int IsFull();
 
void main()
{
    
int status;
int ch;
while(1)
{
printf("\n\n1.Enqueue\n2.Dequeue\n3.Traverse(Display)\n4.Exit");
printf("\n\nEnter your choice(1-4):");
scanf("%d",&ch);
switch(ch)
{
case 1: status = enqueue();
        if(status==1)
            printf("\nElement inserted successfully");
        break;
case 2: status = dequeue();
        if(status==1)
            printf("\nElement deleted successfully");
        break;
case 3: status = traverse();
        if(status==1)
            printf("\nElement displayed successfully");
        break;
case 4: exit(0);
default: printf("\nWrong Choice\n Enter b/w (1,2,3,4)");
}
}
}

int IsFull()
{
    if(f==0 && r==MAX-1)
        return 1;
    else if (r == f-1)
        return 1;
    return 0;
}

int IsEmpty()
{ 
    if(f == -1 )
        return 1;
    return 0;
}

int enqueue()
{
int i,val;

i=IsFull();
if(i==1)
    printf("\n Queue is Full\n");
else 
{
    printf("\nEnter element to insert:");
    scanf("%d",&val);
    if(r==-1)
    { f=0;
      r=0;
    }
    else if(f>0 && r==MAX-1)
        r=0;    
    else 
        r++;
    
    cqueue[r]=val;
    return 1;
}
}
 
int dequeue()
{ 
    int i;
i=IsEmpty();
if(i==1)
    printf("\n Queue is Empty");
else 
{
    printf("\nDeleted element is %d",cqueue[f]);
    if(r<f && f == MAX-1)
    { 
        f=0;
    }
    f++;
    if (f==r+1)
    {
        f=-1;
        r=-1;
    }
    }
    return 1;
}

 
int traverse()
{
int i;
i=IsEmpty();
if(i==1)
    printf("\n  Queue is Empty");
else{
    if(r<f)
    {
        printf("\nQueue is...\n");
        for(i=f;i<MAX;i++)
        printf("%d  ",cqueue[i]);
        for(i=0;i<=r;i++)
        printf("%d  ",cqueue[i]);
    }
else
    {
        for(i=f;i<=r;i++)
        printf("%d  ",cqueue[i]);
    }

    return 1;
}
}
