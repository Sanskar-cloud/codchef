#include<iostream>
using namespace std;
int main()
{
	long long int t,n,c;
	cin>>t;
	while(t--)
	{
		cin>>n;
		c=0;
		
		while(n!=0)
		{
			if(n%10==4)
			{c++;}
			n=n/10;
		}
		cout<<c<<endl;
		
		}
}
