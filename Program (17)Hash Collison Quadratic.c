#include <stdio.h>
#include<stdlib.h>
#define MAX 10


int htable[MAX];
int c1=1;
int c2=2;


void init()
{int i;
    for( i=0; i<10; i++)
        htable[i]=-1;
}

void insert()
{
 int key,index,i,flag=0,hkey;
 printf("\nenter a value to insert into hash table\n");
 scanf("%d",&key);
 hkey=key%MAX;
 for(i=0;i<MAX;i++)
{
     index=(hkey+(c1*i)+(c2*(i*i))%MAX);
     if(htable[index] == -1)
     {
        htable[index]=key;
         break;
     }
}
if(i == MAX)
     printf("\nelement cannot be inserted\n");
}
void search()
{

 int key,index,i,hkey;
 printf("\nenter search element\n");
 scanf("%d",&key);
 hkey=key%MAX;
 for(i=0;i<MAX; i++)
 {
    index=(hkey+(c1*i)+(c2*(i*i))%MAX);
    if(htable[index]==key)
    {
      printf("value is found at index %d",index);
      break;
    }
  }
  if(i == MAX)
    printf("\n value is not found\n");
}
void display()
{
  int i;

  printf("\nelements in the hash table are \n");

  for(i=0;i< MAX; i++)
              if(htable[i]!=-1)
                printf("\nat index %d \t value =  %d",i,htable[i]);

}
int main()
{
    int choice,i;
    init();
    while(1)
    {
        printf("\nEnter your choice\n1. Insert\n2. Display \n3. Search \n4. Exit \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                insert();
                break;
            case 2:
                display();
                break;
            case 3:
                search();
                break;
            case 4:exit(0);
            default : printf("Wrong input...");
        }
    }
    return 0;
}
