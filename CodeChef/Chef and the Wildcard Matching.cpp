#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int t,len,c,i;
	char x[10],y[10];
	cin>>t;
	while(t--)
	{
		cin>>x>>y;
		len=strlen(x);
		c=0;
		
		for(i=0;i<len;i++)
		{
           if(x[i]==y[i])
           c++;
           
		   if(x[i]!=y[i] && ((x[i]=='?' || y[i]=='?')))
            {
			c++;
			}
			
			
		}
		if(c==len)
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
		
		
	}
}
		
