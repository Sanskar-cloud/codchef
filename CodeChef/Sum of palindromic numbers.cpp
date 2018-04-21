#include<iostream>
using namespace std;
bool check(long int n)
{
	long int cpy1=n;
    long int pal=0;
	int rem;
	while(cpy1!=0)
	{
		rem=cpy1%10;
		pal=pal*10+rem;
		cpy1=cpy1/10;
	}
	if(pal==n)
	return true;
	else
	return false;
}
int main()
{
	int t,i;
	long int l,r,s;
	cin>>t;
	while(t--)
	{
		s=0;
		cin>>l>>r;
		for(i=l;i<=r;i++)
		{
			if(check(i))
			s+=i;
		//	c++;}
			}
	cout<<s<<endl;	
//	cout<<c<<endl;
	}
}

