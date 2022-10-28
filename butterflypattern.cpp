#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n,s;
	cout<<"enter n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		s=2*n - 2*i;
		for(k=1;k<=s;k++)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		s=2*n - 2*i;
		for(k=1;k<=s;k++)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
	
