#include<stdio.h>
int main()
{
int n,st,end,len;
scanf("%d",&n);
len=2*n-1;
st=0;
end=len-1;
int a[len][len];
while(n!=0)
{
	for(int i=st;i<=end;i++)
	{
		for(int j=st;j<=end;j++)
		{
			if(i==st||i==end||j==st||j==end)
			{
				a[i][j]=n;
			}
		}
	}
	st++;
	end--;
	n--;
}
for(int l=0;l<len;l++)
{
	for(int m=0;m<len;m++)
	{
		printf("%d",a[l][m]);
	}
	printf("\n");
}
}
