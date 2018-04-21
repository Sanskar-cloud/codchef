#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
	int t,a,b,count,i,j;
	cin>>t;
	
	while(t--)
	{
		char str[100000],flag;
		cin>>str;
		a=0;b=0,count=0;
		int len=strlen(str);
		for(i=0;i<len;i++)
		{
			if(str[i]=='A')
			a++;
			else if(str[i]=='B')
			b++;
		}
		for(i=0;i<len;i++)
		{
			if(str[i]=='A' || str[i]=='B')
			{
				flag=str[i];
				 j=i;
				break;
				
			}
		}
		for(i=j;i<len;i++)
		{
			
			 if(flag=='A' && str[i]=='A')
			{
			a+=count;
			flag='A';
			count=0;
			}
			 else if(flag=='A' && str[i]=='B')
			{
				flag='B';
				count=0;
			}
			else if(flag=='B' && str[i]=='B')
			{
				b+=count;
				flag='B';
				count=0;
				
			}
			else if(flag=='B' && str[i]=='A')
			{
				flag='A';
				count=0;	
			}
			else if(str[i]=='.')
			{
				count+=1;
			}
		}
		cout<<a<<" "<<b<<endl;
	}
	getch();	
}
