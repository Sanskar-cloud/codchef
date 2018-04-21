#include<iostream>
using namespace std;
int main()
{
	
	long long int t,n,k,s,i,temp;
	cin>>t;
	while(t--)
	{
		s=0;
		cin>>n>>k;
		for(i=0;i<n;i++)
		{
			cin>>temp;
			s+=temp;
		}
		if( s%2==0 && k==1)
		{cout<<"odd"<<endl;}
		else
		{cout<<"even"<<endl;}	
		}
}
