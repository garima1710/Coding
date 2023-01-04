#include <bits/stdc++.h>
using namespace std;

void func(string str)
{
	map<char,int> mp;
	int l = str.length();
	for(int i=0;i<l;i++)
		mp[str[i]]++;
	if(mp.size()%2 != 0)
		cout<<"IGNORE HIM!";
	else
		cout<<"CHAT WITH HER!";	
}

int main()
{
	string str;
	cin>>str;
	func(str);

	return 0;
}