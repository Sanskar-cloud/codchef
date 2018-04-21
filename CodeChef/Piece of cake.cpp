#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int t,i,j,len,a,b,c;
	cin>>t;
	char str[50];
	while(t--)
	{
		cin>>str;
		c=0;
		len=strlen(str);
		
		for(i=0;i<len;i++)
		{
			a=0,b=0;
			for(j=0;j<len;j++)
			{
				if(str[i]==str[j])
				a++;
				if(str[i]!=str[j])
				b++;
				
			}
			
		//	cout<<a<<" "<<b<<endl;
		if(a==b)
		{	c++;
			break;}
			
		}
		if(c>0)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl; 
		
		
		
	}
	
}
