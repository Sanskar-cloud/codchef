#include <iostream> 

using namespace std;

int main()
{
	long int n,i;
	cin>>n;
	long int P1[n],P2[n],lead[n];
	
	for(i=0;i<n;i++)
	{
	cin>>P1[i]>>P2[i];	
	}
	
	for(i=1;i<n;i++)
	{
		P1[i]+=P1[i-1];
		P2[i]+=P2[i-1];
	}
	for(i=0;i<n;i++)
	{
	if(P1[i]>P2[i])
	{lead[i]=P1[i]-P2[i];}
	
	else if(P1[i]<P2[i])
	{lead[i]=P2[i]-P1[i];}
	
	else 
	{lead[i]=0;}
}
	
/*for(i=0;i<n;i++)
{
	cout<<lead[i]<<endl;
}*/
long int max=lead[0];long int k=0;
	for(i=1;i<n;i++)
	{
	if(lead[i]>max)
		{
		max=lead[i];
		k=i;
		}
	}
	if(P1[k]>P2[k])
	{cout<<1<<" "<<lead[k];}
	
	if(P1[k]<P2[k])
	{cout<<2<<" "<<lead[k];}
	

	
}
