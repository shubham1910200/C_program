/* --------------------------Double Ended Queue(Input Restrcited)---------------------------*/
#include<stdio.h>
#include<stdlib.h>
 
#define MAX 5 
 
int f=-1;
int r=-1;




int Dqueue[MAX];
int enqueue();
int dequeue_front();
int dequeue_rear();
int traverse();
int IsEmpty();
int IsFull();
 
void main()
{
    
int status;
int ch;
printf("\n-----Double Ended Queue-----");
while(1)
{
printf("\n1.Enqueue\n2.Dequeue from Front\n3.Dequeue from End\n4.Traverse(Display)\n5.Exit");
printf("\n\nEnter your choice(1-5):");
scanf("%d",&ch);
switch(ch)
{
case 1: status = enqueue();
        if(status==1)
            printf("\nElement inserted successfully");
        break;
case 2: status = dequeue_front();
        if(status==1)
            printf("\nElement deleted successfully");
        break;
case 3: status = dequeue_rear();
        if(status==1)
            printf("\nElement deleted successfully");
        break;
case 4: status = traverse();
        if(status==1)
            printf("\nElement displayed successfully");
        break;
case 5: exit(0);
default: printf("\nWrong Choice\n Enter b/w (1,2,3,4)");
}
}
}

int IsFull()
{
    if(r==MAX-1)
        return 1;
    return 0;
}

int IsEmpty()
{ 
    if(f == -1 || r==-1 )
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
    else 
        r++;
    
    Dqueue[r]=val;
    return 1;
}
}
 
int dequeue_front()
{ 
int i;
i=IsEmpty();
if(i==1)
    printf("\n Queue is Empty");
else 
{
    printf("\nDeleted element is %d",Dqueue[f]);
    f++;
    return 1;
}
}
int dequeue_rear()
{ 
int i;
i=IsEmpty();
if(i==1)
    printf("\n Queue is Empty");
else 
{
    printf("\nDeleted element is %d",Dqueue[r]);
    r--;
    if(r==f-1)
    {
        r=-1;
        f=-1;
    }
    return 1;
}
} 
int traverse()
{
int i;
i=IsEmpty();
if(i==1)
    printf("\n  Queue is Empty");
else
{
printf("\nQueue is...\n");
for(i=f;i<=r;i++)
printf("%d  ",Dqueue[i]);

    return 1;
}
}




