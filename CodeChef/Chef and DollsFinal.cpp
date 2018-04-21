#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long int n,i,k;
		scanf("%ld",&n);
		long int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%ld",&a[i]);
		}
		sort(a,a+n);
		for(i=0;i<n;i++)
		{
			if(a[i]==a[i+1])
			{
				i++;
			}
			else
				k=a[i];
		}
		printf("%ld\n",k);
	}
} 
