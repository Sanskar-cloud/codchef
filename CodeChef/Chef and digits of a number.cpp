#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int t;
	long int o,z,i;
	cin>>t;
	char str[100000];
	
	while(t--)
	{
		o=0,z=0;
	cin>>str;
	
		for(i=0;i<strlen(str);i++)
		{
		if(str[i]=='0')
		z++;
		if(str[i]=='1')
		o++;
		}
	//	cout<<o<<z<<endl;
		if(o==1 || z==1)
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
	}
}
