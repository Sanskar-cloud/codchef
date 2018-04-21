#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int t,i,x,c;
	cin>>t;
	long int p;
	
	while(t--){
		cin>>p;
		c=0;
		for(i=11;i>=0;i--)
		{
		x=p/(long int)pow(2,i);
		c+=x;
		p=p%(long int)pow(2,i);
		}
		cout<<c<<endl;
	}
}
