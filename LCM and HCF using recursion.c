#include<stdio.h>
#include<stdlib.h>
int main()
{
int num1,num2;
printf("Enter two number" );
scanf("%d %d",&num1,&num2);
	int x = LCM(num1,num2);
	int y  = HCF(num1,num2);
	printf("LCM is  = %d",x);
	printf("\n");
	printf("HCF is = %d",y);
}
int LCM(int a,int b)
{
	 static int m = 0;
	m= m+b;
	
	
	
	if(m%a==0 &&m%b==0)
	{
		return m;
	}
	return LCM(a,b);
}
int HCF(int a,int b)
{ 
int count = 0;
	if(b!=0)
	
		return HCF(b,a%b);
	else
		return a;
}

