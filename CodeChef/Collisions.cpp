#include<iostream>
using namespace std;
int fact (int n)
{
	int fact=1,i;
	for(int i=1;i<=n;i++)
	{
		fact*=i;
	}
	return fact;
}
int main()
{
	int t,m,n,c,i,j;
	cin>>t;
	while(t--)
	{
		int sum=0;
		cin>>n>>m;
		char a[n][m];
		for(i=0;i<n;i++)
		{
		cin>>a[i];
		}
			
		for(i=0;i<m;i++)
		{
			c=0;
			for(j=0;j<n;j++)
			{
				if(a[j][i]=='1')
				c+=1;
			}
			if(c>1)
			sum+=fact(c)/(fact(c-2)*2);
		}
		cout<<sum<<endl;
	}
}
