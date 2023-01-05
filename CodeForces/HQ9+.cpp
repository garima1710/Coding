#include <bits/stdc++.h>
using namespace std;

bool func(string str)
{
	int l = str.length();
	for(int i=0;i<l;i++)
		if(str[i] == 'H' || str[i] == 'Q' || str[i] == '9')
			return true;
	return false;
}

int main()
{
	string str;
	cin>>str;
	if(func(str))
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}