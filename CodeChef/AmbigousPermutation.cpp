#include<iostream>
using namespace std;
int main()
{
	long int n,i;

	while(cin>>n)
	{
		
		long int a[n+1],b[n+1];
		if(n==0)break;
		string toggle="ambiguous";
		
		for(i=1;i<=n;i++)
		{
			cin>>a[i];
			b[a[i]]=i;
		}
			for(i=1;i<=n;i++)
		{
				if(a[i]!=b[i])
			
				{
				toggle="not ambiguous";
				break;
				}
		}
			
		cout<<toggle<<endl;	 
		}
	}
