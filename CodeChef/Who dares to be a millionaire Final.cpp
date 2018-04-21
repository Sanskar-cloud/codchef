#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	int t,n,i;
	cin>>t;
	while(t--)
	{
		cin>>n;int count=0;
		string str;
		string str1;
		cin>>str;
		cin>>str1;
		int w[n+1];
		for(i=0;i<n+1;i++)
			cin>>w[i];
		for(i=0;i<n;i++)
		{
			if(str[i]==str1[i])
			{
				count++;
			}
		}
		if(count==n)
		{
			cout<<w[n]<<endl;
		}
		else
		{
			int ans=0;
			for(i=0;i<=count;i++)
			{
				if (ans<w[i])
				ans=w[i];
			}
			cout<<ans<<endl;
		}
	}
	return 0;
} 
