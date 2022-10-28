#include<stdio.h>

	int fibb(int n);
	int main()
	{
		int n;
		printf("enter no of terms to be printed of the fibbonacci series");
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			printf(" %d ",fibb(i));
		}
		
	}
int fibb(int n)
{
	if(n==0)
	return 0;
	else
	if(n==1)
	return 1;
	else 
	return fibb(n-1)+fibb(n-2);
}
