#include <iostream> 
using namespace std;
int check(int arr[], int x)
{
	int i=0,j=x-1;int toggle=0;
	
	while (i!=j && ((x-13)%2==0) && arr[(x/2)]==7)
	{
		if(arr[i]==arr[j] && arr[i]<arr[i+1] && arr[j]>arr[j-1])
		{
		i+=1;
		j-=1;
		toggle=1;
	    }
		else
		toggle=0;
		break;
	}
	return toggle;
}
int main(){
	int t,arr[100],ans=0;
	cout<<"Enter number of test case";
	cin>>t;
	
	while (t--)
	{
	int x;
	cout<<"Enter number of elements";
	cin>>x;
	if(x>=7 && x<100)
	{
	
	for(int i=0; i<x;i++)
	cin>>arr[i];
	if ()
	int ans =check(arr,x);
}
	if(ans==1)
	cout<<"yes";
	else
	cout<<"no";
}
}
