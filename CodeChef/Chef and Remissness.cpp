#include<iostream>
using namespace std;
int main()
{
int t;
long int a,b,min,max;
cin>>t;
while(t--)
{
	min=0,max=0;
	cin>>a>>b;
		if(a>b)
		min=a;
		else
		min=b;
	
	max=a+b;
	cout<<min<<" "<<max<<endl;
	}
}
