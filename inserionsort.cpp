#include<iostream>
using namespace std;
int main()
{
	int x,i,j,n;
	int a[100];
	cout<<"enter number of elements of array";
	cin>>n;
	cout<<"\nenter array elements";
	for(int k=0;k<n;k++)
	{
		cin>>a[k];
	}
	for(i=1;i<n;i++)
	{
		x=a[i];
		j=i-1;
		while(j>=0&&a[j]>x)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=x;
	}
	cout<<"\n SORTED ARRAY ";
	for(i=0;i<n;i++)
	{
		cout<<" "<<a[i];
	}
	return 0;
}
