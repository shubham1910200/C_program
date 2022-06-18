#include<stdio.h>
#include<stdlib.h>
#define MAX 100
void init();
void insert();
void search();
void display();

int htable[MAX];
int key;
int mod=10;

int main()
{   int ch,status;

    init();
    while(1)
    {
	printf("\n1.Insert data\n2.Search\n3.Display\n4.Exit\n");
	printf("Enter your choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:insert();
			break;
		case 2: search();
			break;
		case 3:display();
			break;
		case 4: exit(0);
		default : printf("\nWrong choice\n");
		}
	}
    return 0;
}

void init()
{
    int i;
    for(i = 0; i < MAX; i++)
	htable[i] = -1;
}

void insert()
{       int value;
	printf("Enter value to insert\n");
	scanf("%d",&value);
	key = value % mod;
	htable[key]=value;
    printf("\nValue Inserted Successfully\n");
}
void search()
{       int value,i,flag;  
	printf("Enter value to search\n");
	scanf("%d",&value);
	key = value % mod;
	 if(htable[key]==value)
	        printf("\nValue %d found\n",value);
	  else     
	    printf("\nValue %d not found...\n",value);
}
void display()
{
	int i;
    for( i = 0; i < MAX; i++) 
    {
	if(htable[i]!=-1)
	    printf("htable[%d] = %d\n",i,htable[i]);
    }
}

