#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	long int n;
	while(t--)
{
	cin>>n;
	long int a[n+1],i;


	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}                    //input array
		
		
		
	long int max=a[1];
	for(i=2;i<=n;i++)   //find maximum element
	{
	if(a[i]>max)
	max=a[i];
	}
	
	
	long int freq[max];

	for(i=1;i<=max;i++)
	{
	freq[i]=0;
//	cout<<freq[i]<<endl;
	}                    //set all elements to zero
	

	for(i=1;i<=n;i++)
	{
		freq[a[i]]+=1;   // update frequency
	}
		
	for(i=1;i<=max;i++)
	{
			//cout<<freq[i]<<endl;   //check odd freq and print element
		if(freq[i]%2!=0)
			cout<<i<<endl;
	}
		
}

}
