#include<stdio.h>
#include<stdlib.h>

int recursionsum(int n)
{
		
	if(n==0)
	{
	
		return 0;
	}
	else
	{
	
				return n+recursionsum(n-1);
	}

	
	
	
	
}
int main()
{
	int n;
	printf("Enter the number \n");
	scanf("%d",&n);
	 int x = recursionsum(n);
	printf("%d",x);
}
