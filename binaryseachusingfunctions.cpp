#include<iostream>
using namespace std;
int bs(int arr[],int n,int key)
{
int i,f,l,m;
f=0;
l=n;
m=(f+l)/2;
while(f<=l)
{
for(i=0;i<n;i++)
{
	if(arr[i]<key)
	f=m+1;
	else if(arr[i]==key)
	return i+1;
	else
	l=m-1;
}
m=(f+l)/2;
return -1;
}
while(f>l)
return -1;
}

int main()
{
int j,n,key;
cout<<"enter n and key";
cin>>n>>key;
int arr[n];
for(j=0;j<n;j++)
{
	cin>>arr[j];
}
cout<<bs(arr,n,key);
return 0;
}
