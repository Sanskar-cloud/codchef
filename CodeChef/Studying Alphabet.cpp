#include<iostream>
#include<string.h>
using namespace std;
int main()
{char s[50],wrd[50];
	int n,i,j;
	cin>>s;cin>>n;
	while(n--)
	{
		cin>>wrd;
	int	len=strlen(s);
	int len2=strlen(wrd);
	int arr[len2];
	for(i=0;i<len2;i++)
	{arr[i]=0;}
	
	for(i=0;i<len2;i++)
		{
			for(j=0;j<len;j++)
			{	
				if(s[j]==wrd[i])
				{
					arr[i]+=1;
					break;
					}
			}	
			
		}
		int sum=0;
		for(i=0;i<len2;i++)
		{sum+=arr[i];}
		//cout<<sum<<endl;
		if(sum==len2)
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
		
		}
		
	}

 
