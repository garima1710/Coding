#include <bits/stdc++.h>
using namespace std;


string func(string str)
{
	string x,ans;
	int l = str.length();

	if(l<=10)
		return str;
	else
	{
		string x = to_string(l-2);
		ans = str[0] + x + str[l-1];
		return ans;
	}
}

int main()
{
	int n;
	cin>>n;
	string str;
	int l;
	for(int i=0;i<n;i++)
	{
		cin>>str;
		cout<<func(str)<<endl;
	}
	return 0;
}