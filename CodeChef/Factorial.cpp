#include<iostream>
using namespace std;
int main()
{
long long int t,n;
cin>>t;
while(t--)
{
	cin>>n;
	long long int sum=0;
	while(n!=0)
	{
		n=n/5;
		sum=sum+n;
	}
	cout<<sum<<endl;
}
}
