#include<stdio.h>
int main()
{
	int i=0,j,r,n;
	int a[10];
	printf("enter a no");
	scanf("%d",&n);
		while(n>0)
	{
		r=n%2;
		a[i]=r;
		n/=2;
		i++;
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%d",a[j]);
	}
}
