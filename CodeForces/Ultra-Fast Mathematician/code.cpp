#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1,s2;
	cin>>s1>>s2;
	string s;
	int l = s1.length();
	for(int i=0;i<l;i++)
	{
		if(s1[i] == s2[i])
			s += '0';
		else
			s += '1';
	}
	cout<<s;
	return 0;
}