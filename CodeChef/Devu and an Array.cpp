#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,q,t,i,temp;
	cin>>n>>q;
	long long int a[n];
	for(i=0;i<n;i++)
	{cin>>a[i];}
	sort(a,a+n);
	while(q--)
	{
		
		cin>>temp;
		if(temp>=a[0] && temp<=a[n-1])
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
	}
}
