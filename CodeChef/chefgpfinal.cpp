#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{  
	long int t,i,a,b,x,y;
	cin>>t;
	while(t--)
	{
		a=0,b=0;
	char str[100000];
	cin>>str;
	cin>>x>>y;
	int len=strlen(str);
	sort(str,str+len);
	for(i=0;i<len;i++)
	{
		if(str[i]=='a')
		a++;
		else
		break;
	}
	b=len-a;
	 if(a==b || abs(a-b)==1 )
		{
			for(int i=0;i<a+b;i++)
					{
					if(i%2==0)
					str[i]='a';
					else
					str[i]='b';
					}
			for(int i=0;i<a+b;i++)
		{			cout<<str[i];}
		cout<<endl;
		}
		
	
	else if(a>b)
	 {
		vector <char> ans(a,'a');
		vector <char> :: iterator j;
		if(b>0)
		{
			ans.insert(ans.end(),b,'b');
			
		for(j=ans.begin()+x;j<ans.end();j+=x)
			{
			if(b>0)
				{
					ans.insert(j,'b');
					b-=1;
					ans.pop_back();
					j+=1;
				}
			else 
				{
					ans.insert(j,'*');	
					j+=1;
				}
	
			}
		  }
			else if(b==0)
	 			{
					int m=a/x;
					if(a%2==0)
     					ans.insert(ans.end(),m-1,'*');
     				else
     					ans.insert(ans.end(),m,'*');

		  			for(j=ans.begin()+x;j<ans.end();j+=x)
		  				{
						ans.insert(j,'*');
						ans.pop_back();	
							j+=1;
			  			}		
				}
    	for(j=ans.begin();j!=ans.end();++j)
    	{ cout<<*j;}
		cout<<endl;
		}
	
	else if(a<b)
	{
		vector <char> ans(b,'b');
		vector <char> :: iterator j;
		if(a>0)
		{
			ans.insert(ans.end(),a,'a');
			
		for(j=ans.begin()+y;j<ans.end();j+=y)
			{
			if(a>0)
				{
					ans.insert(j,'a');
					a-=1;
					ans.pop_back();
					j+=1;
				}
			else 
				{
				
					ans.insert(j,'*');	
					j+=1;
				}
	
			}
		  }
			else if(a==0)
	 			{
					int m=b/y;
					if(b%2==0)
     					ans.insert(ans.end(),m-1,'*');
     				else
     					ans.insert(ans.end(),m,'*');

		  			for(j=ans.begin()+y;j<ans.end();j+=y)
		  				{
						ans.insert(j,'*');
						ans.pop_back();	
							j+=1;
			  			}		
				}
    	for(j=ans.begin();j!=ans.end();++j)
    	{ cout<<*j;}
		cout<<endl;
	}
	}
getch();
}
