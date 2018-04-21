#include<iostream>
#include<string.h>
#include <bits/stdc++.h>
 
#include<math.h>
using namespace std;
int main()
{
	long int t,y,diff,i;
	string week[]={"","monday","tuesday","wednesday","thursday","friday","saturday","sunday","monday"};
	cin>>t;
	while(t--)
	{
		cin>>y;
		diff=abs(2001-y);	
	//	cout<<diff;		
		if(y>2001)
			{
				for(i=2002;i<=y;i++)
				{
					if(((i%4==0) && (i%100!=0)) ||  (i%400==0))
					diff+=1;
				}
			}
			if(y<2001)
			{
				for(i=2001;i>=y;i--)
				{
					if(((i%4==0) && (i%100!=0)) || (i%400==0))
					diff+=1;
				}
			}
				
	//	cout<<diff;		
	if(y>2001)
		cout<<week[1+diff%7]<<endl;
		if(y<2001)
		cout<<week[8-diff%7]<<endl;
		if(y==2001)
		cout<<week[1]<<endl;		
			
	}
		
		
		
}
