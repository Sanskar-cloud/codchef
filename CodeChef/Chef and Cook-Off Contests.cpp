#include<iostream>
#include<string>
using namespace std;
int main()
{
	long long int t,n,a,b,c,d,e;
	string arr[]={"cakewalk","simple","easy","easy-medium","medium","medium-hard","hard"};
	cin>>t;
	
	while(t--)
	{
		cin>>n;
		string temp;
		a=0,b=0,c=0,d=0,e=0;
		if(n<=7)
		{
		for(int i=0;i<n;i++)
		{
			cin>>temp;
		if (temp.compare(arr[0]) == 0)
		a++;
		else if(temp.compare(arr[1]) == 0)
		b++;
		else if(temp.compare(arr[2]) == 0)
		c++;
		else if(temp.compare(arr[3]) == 0 || temp.compare(arr[4]) == 0 )
		d++;
		else if(temp.compare(arr[5]) == 0 || temp.compare(arr[6]) == 0)
		e++;
	}
	if(a==1 && b==1 && c==1 && d==1 && e==1)
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;
	}
	if(n>7)
	{cout<<"No"<<endl;}
	
	}
}
