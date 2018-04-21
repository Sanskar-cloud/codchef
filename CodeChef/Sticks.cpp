#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int* a=new int[n];
		for(i=0;i<n;i++)
		{cin>>a[i];}
		
		int rect[2]={0,0};
		sort(a,a+n);
		int j=1;
		for(i=n-1;i>0;i--)
		{
			
			if(a[i]==a[i-1] && a[i]>rect[j] && j>=0  )
			{
				rect[j]=a[i];
				j--;
				i-=1;
				
			}
		}
		if(rect[0]==0 || rect[1]==0 )
		cout<<"-1"<<endl;
		else
		cout<<rect[0]*rect[1]<<endl;
	}	
}
