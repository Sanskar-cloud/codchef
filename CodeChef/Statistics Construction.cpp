#include <iostream>
using namespace std;
 
int main() {
 
	int testcase;
	cin >> testcase;
 
	while (testcase--) 
	{
	    int n;
	    cin >> n;
 
	    if (n%2) 
		{
	        for (int i=n-n/2; i<=n+n/2; i++)
	        cout << i << " ";
	    }
	    else 
		{
	        for (int i=n-n/2; i<=n+(n/2)-1; i++)
	        cout << i << " ";
	    }
	    cout << "\n";
	}
 
	return 0;
}  
