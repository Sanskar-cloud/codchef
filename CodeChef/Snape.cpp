#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t,b,ls;
	float min,max;
	cin>>t;
	while(t--)
	{
		min=0,max=0;
		cin>>b>>ls;
		min=(float)sqrt(ls*ls-b*b);
		max=(float)sqrt(ls*ls+b*b);
		cout<<min<<" "<<max<<endl;
	}
}
