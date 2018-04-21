#include<iostream>
#include<bits/stdc++.h>
#include <math.h>
int C(int n, int r) {
    if(r > n / 2) r = n - r;
    int ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}
using namespace std;
int main()
{
	 int i,n,t,c,d,max,max2,r=2;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int arr[n];
		for(i=0;i<n;i++)
		{cin>>arr[i];}
		sort(arr,arr+n);
		max=arr[n-1];
		c=0,d=0;int pos;
		for(i=n-1;i>=0;i--)
		{
			if(arr[i]==max)
			c++;
			else
			{pos=i;
			break;
			}
		}
		
	if(c==n)
	cout<<"1.00000000"<<endl;
	else if(c==1)
	{
		max2=arr[i];
		for(i=pos;i>=0;i--)
		{
			if(arr[i]==max2)
			d++;
		}
		float ans=(c*d*1.00000000)/C(n,r);
		cout<<ans<<endl;
	}
	else if(c>1 && c!=n)
	{
		float ans=1.0000000000*C(c,r)/C(n,r);
		cout<<ans<<endl;
	}
	}
}
