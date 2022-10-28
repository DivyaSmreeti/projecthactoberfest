#include<iostream>
using namespace std;
int ls(int arr[],int n,int key)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		return i+1;
		else
		return -1;
	}}
	int main()
	{
		int j,n,key;
		cout<<"enter number of elements and key =";
		cin>>n>>key;
		int arr[n];
		cout<<"enter array items";
		for(j=0;j<n;j++)
		{
			cin>>arr[j];
			
		}
		
			cout<<ls(arr,n,key);
		
		return 0;
	}

