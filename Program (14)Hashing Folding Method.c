#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int htable[MAX];
int i;
void init()
{
    for(i=0; i<100; i++)
        htable[i]=-1;
    }
void insert()
{       int temp,ind=0,key,length=0;
        printf("Enter the key value\n");
        scanf("%d",&key);
        temp=key;
        while(temp!=0)
        {
            length++;
            temp=temp/10;
        }
    temp=key;
    if(length%2!=0)
    {   ind=temp%10;
        temp=temp/10;
    }
    while(temp!=0)
    {
        ind = ind + temp%100;
        temp=temp/100;
    }
    htable[ind]=key;
        	printf("Value inserted Successfully %d\n",ind);
}
void search()
{       int temp,ind=0,key,length=0;
    printf("Enter the key value\n");
            scanf("%d",&key);
            temp=key;
            while(temp!=0)
                {
                    length++;
                    temp=temp/10;
                }
    temp=key;
    if(length%2!=0)
    {   ind=temp%10;
        temp=temp/10;
    }
    while(temp!=0)
    {
        ind = ind + temp%100;
        temp=temp/100;
    }
    
	 if(htable[ind]==key)
	        printf("\nValue %d found at location %d\n",key,ind);
	 else 
	        printf("\nValue %d not found...\n",key);
}
void display()
{
    for( i=0; i<MAX; i++)
    {
        if(htable[i]!=-1 )
        printf("%d   ",htable[i]);
    }
}
int main()
{   int ch,temp;

    
    
    init();
    while(1)
    {
	printf("\n1.Insert data\n2.Search\n3.Display\n4.Exit\n");
	printf("Enter your choice\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
        insert();
			break;
		case 2: 
		    search();
			break;
		case 3: display();
			break;
		case 4: exit(0);
		default : printf("\nWrong choice\n");
		}
	}
    return 0;
}
