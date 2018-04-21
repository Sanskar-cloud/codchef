#include<iostream>
using namespace std;
int main()
{
	long long int t,n,b,m,time;
	cin>>t;
	while(t--)
	{
		time=0;
	cin>>n>>b>>m;
	while(n!=0)
	{
		if(n%2==0)
		{
			time+=m*(n/2)+b;
			n-=n/2;
			m=m*2;
		}
		if(n%2!=0)
		{
			{time+=m*(n/2+1)+b;}
			n-=n/2+1;
			m=m*2;
		}
		
		
	}
	cout<<time-b<<endl;
	}
}
