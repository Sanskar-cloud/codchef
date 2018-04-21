#include <iostream> 
#include <iomanip> 
using namespace std;
int main()
{
	int wdrw;
	double bal;
	cin>>wdrw;
	cin>>bal;
	 	
	 	
	 	if (wdrw%5==0 && (wdrw+0.50)<=bal)
	 	{
			bal=bal-wdrw-0.50;
			cout<<fixed<<setprecision(2)<<bal;
		}
		else
		cout <<fixed<<setprecision(2)<<bal;
	
}
