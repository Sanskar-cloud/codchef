#include<bits/stdc++.h>
using namespace std;
#define loop(i,n) for(int i=0;i<(int) n;++i)
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int n,p,i,j;
		cin>>n>>p;
		vector<char> str;
		int c=1;
		if(p==1 || p==2)
		c=0;
		if(c)
		{
		if(p%2!=0)
		{
		loop(i,n/p)
		{
		loop(j,p)
		{
		if(j%2)
		{
		str.push_back('b');
		}
		else
		{
		str.push_back('a');
		}
		}
		}
		}
			else if(p%4==0)
			{
				loop(i,n/4)
				{
				str.push_back('a');
				str.push_back('b');
				str.push_back('b');
				str.push_back('a');	
				}
			}
			else
			{
				loop(i,2*(n/p))
				{
				loop(j,p/2)
				{
				if(j%2)
				{
				str.push_back('b');
				}
						else
					{
						str.push_back('a');
					}
				}
			}
		}
			loop(i,n)
			{
				cout<<str[i];
			}
			cout<<"\n";
		}
		else
		{
			cout<<"impossible\n";
		}
		str.clear();
	}
	return 0;
}
