#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    string week[]={"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
    while(t--)
    {
        int year,diff,i;
        cin>>year;
        diff=year-1900;
        for(i=1900;i<year;i++)
        {
            if((i%4==0 && i%100!=0) || i%400==0)
            diff++;
        }
        diff=diff%7;
        cout<<week[diff]<<endl;
    }
	return 0;
} 
