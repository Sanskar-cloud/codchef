#include <bits/stdc++.h>
#define MAX_CHAR 256
using namespace std;


bool isPalindrome(char str[], int l, int h)
{

	while (h > l)
		if (str[l++] != str[h--])
			return false;

	return true;
}

int check(char str[])
{

	int n = strlen(str);

	
	int freq[MAX_CHAR] = { 0 };


	for (int i = 0; i < n; i++)
	{
		freq[str[i]]++;


		if (freq[str[i]] > 3)
			return true;
	}


	int k = 0;
	for (int i = 0; i < n; i++)
		if (freq[str[i]] > 1)
			str[k++] = str[i];
	str[k] = '\0';


	if (isPalindrome(str, 0, k-1))
	{
	
		if (k & 1)
			return str[k/2] == str[k/2 - 1];

		return false;
	}

	return true;
}

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	char str[100];
	cin>>str;
	
if(strlen(str)==2)
{
	if(str[0]==str[1])
	{cout<<"yes"<<endl;}
	
	else
	{cout<<"no"<<endl;}
}
else
{

	if (check(str))
		cout << "yes"<<endl;
	else
		cout << "no"<<endl;
}
}
}
