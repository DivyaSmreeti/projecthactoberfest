#include<stdio.h>
int main()
{
	int i,j,k,rows,p;
	printf("enter no of rows:");
	scanf("%d",&rows);
	p=rows;
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<i;j++)
		{
		printf(" ");
		}
		for(k=(2*p-1);k>=1;k--)
		{
		printf("*");
		}
		p--;
		printf("\n");
	}
	return 0;
}
