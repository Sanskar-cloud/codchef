#include <iostream> 
using namespace std;
int main(){
	int t;
	cin>>t;
	while (t--)
	{
	int x;
	cin>>x;
	
	int arr[x];
		for(int i=0; i<x;i++)
			{
				cin>>arr[i];
			}
	
	int i=0,j=x-1;int toggle=0;

	
		while ((i!=j) && ((x-13)%2==0) && (arr[(x/2)]==7 ))
				{
			if(arr[i]==arr[j] )
				{
				i+=1;
				j-=1;
				toggle=1;
	    		}
			else
			toggle=0;

		
				}	
	if(toggle==1)
	cout<<"yes";
	else
	cout<<"no";
}
}

