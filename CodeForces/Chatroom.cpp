#include<bits/stdc++.h>
using namespace std;

string func(string str)
{
	string temp = "hello";
	int l = str.length();
	int i=0,j=0;
	int len = 5;
	while(i < l && j < len)
	{
		if(temp[j] == str[i])
		{
			i++;
			j++;
		}
		else
			i++;
	}
	if(j == 5)
		return "YES";
	return "NO";
}

int main()
{
	string str;
	cin>>str;
	cout<<func(str);
	return 0;
}