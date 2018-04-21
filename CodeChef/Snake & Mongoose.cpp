#include<iostream>
#include<string.h>

using namespace std;
int main()
{
	long int t,i,s,m;
	cin>>t;
	while(t--)
	{
		char str[100];
		cin>>str;
		s=0;
		m=0;
		int x=strlen(str);
		
	
		for(i=0;i<x;i++)
		{
			if(i==0 && str[i]=='m' && str[i+1]=='s')
			{
			str[i+1]='*';
			continue;
			}
			if(i>0  && str[i]=='m' && (str[i-1]=='s' && str[i+1]=='s'))
			{
			str[i-1]='*';
			continue;
			}
			if(i>0 && str[i]=='m' && (str[i-1]!='s' && str[i+1]=='s'))
			{
			str[i+1]='*';
			continue;
			}
			if(i>0 && str[i]=='m' && (str[i-1]=='s' && str[i+1]!='s'))
			{
			str[i-1]='*';

			}
		}
		for(i=0;i<x;i++)
		{
			if(str[i]=='s')
			s++;
			if(str[i]=='m')
			m++;
			
		}
	
		if(m>s)
			cout<<"mongooses";
			if (m<s)
			cout<<"snakes";
			if(m==s)
			cout<<"tie";
			
		}
	
	}
