#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	long long int t,c,i;
	char str[100000];
	cin>>t;
	while(t--)
	{	cin>>str;
		int len=strlen(str);
		c=0;
		for(i=0;i<len;i++)
		{
			if(str[i]=='<' && str[i+1]=='>')
			{c+=1;
			}
		//	cout<<str[i];
		}
		
	cout<<c<<endl;	
	}
}
