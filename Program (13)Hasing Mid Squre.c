#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int htable[MAX];
void init()
{
	int i;
    for(i=0; i<100; i++)
        htable[i]=-1;
    }
void insert()
{       int key,ind,sq;
        
	printf("Enter value to insert\n");
	scanf("%d",&key);
	    sq=key*key;
        ind=sq%1000;
        ind=ind/10;
        htable[ind]=key;
        	printf("Value inserted Successfully\n");
}
void search()
{       int key,sq,ind;  
	printf("Enter value to search\n");
	scanf("%d",&key);
	    sq=key*key;
        ind=sq%1000;
        ind=ind/10;
	    if(htable[ind]==key)
	        printf("\nValue %d found at location %d\n",key,ind);
	    else 
	        printf("\nValue %d not found...\n",key);
}
void display()
{int i;
    for( i=0; i<MAX; i++)
    {
        if(htable[i]!=-1 )
        printf("%d   ",htable[i]);
    }
}
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
		case 3: display();
	
			break;
		case 4: exit(0);
		default : printf("\nWrong choice\n");
		}
	}
    return 0;
}



