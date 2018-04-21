#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t,i;
	cin>>t;
	string s;
	while(t--)
	{
	cin>>s;
	int c=0;
	int len=s.size();
	if(len==2)
	{
		if(s[0]!=s[1])
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	
	else
	{
		
		for(i=s.size()-1;i>=2;i--)
		{
		if(s[i]==s[i-2] && s[i]!=s[i-1])
		c++;
		else
		break;

		}
		
	if(c==len-2)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	}

}

}
