#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int t,n,m,k,i;
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>k;
		for(i=1;i<=k;i++)
		{
			if(n>m)
			{m++;}
			else if(n<m)
			{n++;}
			else
			{break;}
		}
		//cout<<n<<" "<<m<<endl;
		cout<<abs(n-m)<<endl;
	}
	
}
