#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
	long long int i,t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		long long int c=0;
		long long int arr[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		long long int max=arr[n-1];
		
		long long int freq[max+1];
		
		for(i=0;i<=max;i++)
		{
			freq[i]=0;
		}
		for(i=0;i<n;i++)
		{
			freq[arr[i]]+=1;
		}
		for(i=0;i<=max;i++)
		{
			if(freq[i]==0)
			c++;
		}
	if(k==c)
		{
			cout<<max+1<<endl;
		}
	else if(k>c)
		{
			cout<<max+((k-c)+1)<<endl;
		}
	else if (k<c)
	{
		long long int flag;
		for(i=0;i<=max;i++)
		{
			if(k>=0 && freq[i]==0)
			{
				flag=i;
				k--;
			}
		}
		
		cout<<flag<<endl;
	}
}
getch();
}

