#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long int n,i=0,r,s=0;
	cout<<"enter a binary number =";
	cin>>n;
	
	while(n!=0)
	{
		r=n%10;
		n/=10;
		s+=r*pow(2,i);
		i++;
	}
	cout<<"decimal number is "<<s;
	return 0;
}
