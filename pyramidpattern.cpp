#include<stdio.h>
int main()
{
	int n,p=1;
	printf("enter number of rows");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{int p=i;
	int h=i;
		for(int j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		
		
		for(int k=1;k<2*i-p;k++)
		{
			printf("%d",h);
			h++;
		}
		for(int b=2*i-p;b<=2*i-1;b++)
		{ 
			printf("%d",h);
			h--;
		}
			
		
	
	printf("\n");
}
}
