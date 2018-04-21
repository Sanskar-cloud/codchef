#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main()
{
	int t,n;
	long long int w,i;
	while(t--)
	{
		w=0;
		cin>>n;
		char chef[n];
		char ans[n];
		long long int winning[n+1];
		cin>>ans>>chef;
		for(i=0;i<=n+1;i++)
		{cin>>winning[i];	}
		for(i=0;i<n;i++)
		{
			if(chef[i]==ans[i])
			{w++;}
		}
		if(w==n)
		{cout<<winning[w]<<endl;}
		else
		{
			int max=0;
			for(i=0;i<=w;i++)
			{
			if(winning[i]>max)
			max=winning[i];
				
			}
			cout<<max<<endl;
		}
		
		cout<<w<<endl;
		
	}
}
