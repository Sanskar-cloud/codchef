#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main ()
{
	int t;
	long long int n,i,sum,k;
	cin>>t;
	double avg;
	while(t--)
	{
		cin>>n>>k;
		sum=0;
		long int arr[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		for(i=k;i<n-k;i++)
		{
			sum+=arr[i];
		//	cout<<arr[i]<<" ";
		}
avg=(double)sum/(n-2*k);
cout<<fixed<<setprecision(6)<<avg<<endl;		
		
	}
}
