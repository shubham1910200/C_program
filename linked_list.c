#include <stdio.h>
#include<stdlib.h>

// user define function declaration 
int  insert_end();
int traverse();
int delete_end();
int insert_begin();
int searching();
int length();
// end of user define function declaration

// global variable
typedef struct linkedlist
{
    int data;
    struct linkedlist *next;
}list;

list *newnode=NULL,*temp=NULL,*last=NULL;
list *head=NULL;
list *first = NULL;
int main()
{
int choice;
int status;
while(1)
{
    printf("\n 1. Insert at end");
    printf("\n 2. Delete from end ");
    printf("\n 3. Traverse ");
    printf("\n 4. Insert at begining \n");
    printf("\n 5 delete from begin \n");
    printf("\n 6 search the elemet \n");
    printf("\n 7 length of list\n");
    printf("\n 8 Insert at the point\n");
    printf("\n 9 Delete at the point\n");
    printf("\n 10 Exit\n");
    printf("\n Enter the choice .. ");
    
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        status = insert_end();
        if(status == 0)
        printf("\n not enough memory");
        else if (status ==1)
        printf("\n insert node  suc.. ");
        break;
        case 2:
        status = delete_end();
        if(status == 0)
        printf("\n empty list . ");
        else if(status == 1)
        printf("deleted succ... ");
        break;
        case 3:
        status = traverse();
        if(status ==0)
        printf("\n empty linked list");
        else if(status ==1)
        printf("\n traversed suc.. ");
        break;
        case 4:
        status = insert_begin();
        if(status==0)
        printf("not enought memrory\n");
        else if(status==1)
        printf("\n insert element successfully \n");
        break;
        
        case 5:
        	status = delete_begin();
        	if(status==0)
        	printf("not element is availabe");
        	else if(status==1)
        	printf("\ndelelted element successfully\n");
        	break;
        case 6:
        	status = searching();
        	if(status==0)
        	printf("Not element is available");
        	else if(status==1)
        	printf("\n searching is successfully\n");
        	break;
        case 7:
        	status = length();
        	if(status==0)
        	{
        		printf("list is empty\n");
			}
			else if(status==1)
			{
				printf("\nSuccuessfully return length\n");
			}
			break;
		case 8:
			status = insert_at_point();
			if(status==0)
			{
				printf("Not inserted\n");
			}
			else if(status==1)
			{
				printf("\n Inserted Successfully\n");
			}
			break;
		case 9:
			status = delete_at_point();
			if(status==0)
			{
				return 0;
			}
			else if(status==1)
			{
				printf("Deleted Successfully\n");
			}
			break;
        case 10:
        exit(1);
        default:
        printf("\n wrong choice .. ");
    }
}
    return 0;
}

int insert_end()
{
    int no;
    
    newnode = (list*)malloc(sizeof(newnode));
    if(newnode == NULL)
    {
	
    return 0;
	}
	else
	{
	
    printf("\n enter a number .. ");
    scanf("%d",&no);
    newnode->data = no;
    newnode->next =NULL;
	}
    if(head == NULL)
    {
    head = newnode;
    }
    else
    {
        temp=head;
        while(temp->next != NULL)
        {
		
        temp = temp->next;
        
        
    }
    temp->next = newnode;
    }
    return 1;
    
}

int traverse()
{
    temp = head;
    if(temp == NULL)
    return 0;
    printf("\n data in linked list.. ");
    while(temp!= NULL)
    {
    printf("\n %d \t %u",temp->data,temp->next);
    temp = temp->next;
    
    }
    return 1;
}
int delete_end()
{
    list *prev=NULL;
    temp = head;
    if(temp == NULL)
    return 0;
    while(temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    
    printf("\n deleted node %d",temp->data);
    if(head == temp)
    {
	head=NULL;
    free(temp);
    return 1;
    }
    else
    {
        prev->next = NULL;
        free(temp);
    }
    
 return 1;   

}

int insert_begin()
{
	int number;
	newnode = (list*)malloc(sizeof(newnode));
	if(newnode==NULL)
	{
	
	return 0;
	}
	
	
	else
	{
	printf("enter the number\n");
	scanf("%d",&number);
	newnode->data = number;
	newnode->next = NULL;
	newnode->next = head;
	head = newnode;
	}
	return 1;
	
}

int delete_begin()
{
	if(head==NULL)
	{
		printf("List is already empty!");
	}
	
	else
	{
		printf("The deleted element is %d\n",head->data);
		temp = head;
		head = head->next;
		free(temp);
		temp = NULL;
	}
}
int searching()
{
	int num;
	int flag;
	temp = head;
	if(temp==NULL)
	{
		return 0;
	}
	else
	{
		int i=0;
		printf("Enter the number \n");
		scanf("%d",&num);
		while(temp!=NULL)
		{
		
		if(temp->data==num)
		{
			printf("item found at location %d \n",i+1);
			
			flag = 0;
		}
		else
		{
			flag =1;
		}
		temp = temp->next;
		i++;
	}
}
if(flag==1)
{
	printf("the element not found\n");
}
	return 1;
}
int length()
{
	list *temp = 0;
	temp = head;
	if(temp==NULL)
	{
		return 0;
	}
	else
	{
		int count = 1;
		while(temp->next!=NULL)
		{
			count++;
			temp = temp->next;
			
		}
		printf("The length of the linked list is= %d",count);
		
		return 1;
		
	}
}

int insert_at_point()
{
	list *temp =0;
	list *prev = 0;
	temp =head;
	if(temp==NULL)
	{
		return 0;
	}
	else
	{
		int pos;
		int num;
		newnode = (list*)malloc(sizeof(newnode));
		if(newnode==NULL)
		{
			return 0;
		}
		int count=1;
		
		printf("Enter the position \n");
		scanf("%d",&pos);
		if(pos==1)
		{
			insert_begin();
			return 1;
		}
		
		printf("Enter the element \n");
		scanf("%d",&num);
		newnode->data = num;
		
		while(count<pos)
		{
			prev  = temp;
			temp = temp->next;
			count++;
		}
		prev->next = newnode;
		newnode->next = temp;
		return 1;
	}
}
int delete_at_point()
{
	list *temp= 0;
	list *prev =0;
	temp = head;
	if(temp==NULL)
	{
		return 0;
	}
	else
	{
		int pos;
		
		printf("Enter the position\n");
		scanf("%d",&pos);
		if(pos==1)
		{
			delete_begin();
			return 1;
		}
		
		int count = 1;
		while(count<pos)
		{
				
				prev = temp;
				temp = temp->next;
				count++;
		}
		prev->next = temp->next;
		printf("The deleted item %d\n",temp->data);
		free(temp);
		
		return 1;
	}
	
}
