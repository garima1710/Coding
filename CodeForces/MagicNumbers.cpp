#include <bits/stdc++.h>
using namespace std;

string func(string str)
{
	int l = str.length();
	if(str[0] != '1' || (str[l-1] != '1' && str[l-1] != '4'))
		return "NO";

	for(int i=1;i<l-1;i++)
	{
		if(str[i] != '4' && str[i] != '1')
			return "NO";
		else if((str[i] == '1' || str[i] == '4')  && str[i-1] != '1' && str[i-1] != '4' && str[i+1] != '1' && str[i+1] != '4')
			return "NO";
		else if(str[i] != '4' && str[i] != '1')
			return "NO";
		else if(str[i] == '4' && str[i-1] == '4' && str[i+1] != '1')
			return "NO";
	}
	return "YES";
}

int main()
{
	long long n;
	cin>>n;
	string str = to_string(n);
	cout<<func(str);
	return 0;
}