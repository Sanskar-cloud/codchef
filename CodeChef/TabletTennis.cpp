#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int t;cin>>t;string str;
	while(t--)
	{	cin>>str;
		int chef=0,opponent=0,len=str.size();
	for(int i=0;i<len;i++)
	{if(str[i]=='0')
		opponent++;
	 else
		chef++;}
		if(chef>opponent)
	cout<<"WIN"<<endl;
	else
	cout<<"LOSE"<<endl;
}
getch();
}
