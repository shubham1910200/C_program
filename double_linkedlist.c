#include<stdio.h>
#include<stdlib.h>
 typedef struct double_linkedlist
 {
 	int data;
 	struct double_linkedlist *next;
 	struct double_linkedlist *pre;
 } list;
 list *newnode = NULL;
 list *temp = NULL;
 list *head = NULL;
 
int  traverse();
 
 int insert_end()
 {
 	int num;
 	
 	newnode = (list*)malloc(sizeof(newnode));
 	if(newnode==NULL)
 	{
 		return 0;
	 }
	 printf("Enter the element \n");
	 scanf("%d",&num);
	 newnode->data = num;
	 newnode->next = NULL;
	 if(head==NULL)
	 {
	 	newnode->pre = NULL;
	 	newnode->next = NULL;
	 	head = newnode;
	 	
	 }
	 else
	 {
	 	temp = head;
	 	while(temp->next!=NULL)
	 	{
	 		temp = temp->next;
		 }
		 temp->next = newnode;
		 newnode->pre = temp;
		 
	 }
	 return 1;
	 
}
int main()
{
	int choice;
	int status;
	while(1)
{

	printf("\n 1. insert at end\n2. for display\n3. insert at begin");
	scanf("%d",&choice);
	switch(choice)
	{
	
	case 1:
		status = insert_end();
		if(status==0)
		{
			printf("\nnewnode is not created \n");
		}
		else if(status==1)
		{
			printf("newnode is successfully created\n");
		}
	break;
	case 2:
		status = traverse();
		if(status==0)
			printf("linked list is empty\n");
		else if(status==1)
		{
		
			printf("Traverse successfully\n");
		}
	break;
	case 3:
		status=insert_begin();
		if(status==0)
			printf("linkedlist is empty\n");
		else if(status==1)
			printf("linked list is succssfully created\n");
}
}
}

int traverse()
{
	temp =  head;
	if(head==NULL)
	{
		return 0;
	}
	else
	{
		printf("The node is succussfully traverse\n");
		list *temp = head;
		while(temp!=NULL)
		{
			printf("\n%d ",temp->data);
			temp = temp->next;
			temp->pre = temp;
		}
		return 1;
	}

}

int insert_begin()
{
	int num;
	newnode = (list*)malloc(sizeof(newnode));
	if(newnode==NULL)
	{
		return 0;
	}
	else
	{
	
	printf("Enter the number\n");
	scanf("%d",&num);
	newnode->data = num;
	newnode->pre = NULL;
	newnode->next = NULL;
		head = newnode;
		
}
	return 1;
	
}
