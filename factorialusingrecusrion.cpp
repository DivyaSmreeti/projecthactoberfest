#include<stdio.h>
int fact(int n);
int main()
{
	int n;
	printf("enter number ");
	scanf("%d",&n);
	printf("\n the factorial of number is %d",fact(n));
}
int fact(int n)
{
	if(n==1||n==0)
	{
		return 1;
	}
	else
	return (n*fact(n-1));
}
