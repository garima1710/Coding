#include<iostream>
using namespace std;

int main()
{
	string s;
	cin>>s;
	string ans;

	int l = s.length();
	for(int i=0;i<l;i++)
	{
		if(s[i] == '.')
			ans += '0';
		else if(s[i] == '-' && s[i+1] == '.')
		{
			ans += '1';
			i++;
		}
		else if(s[i] == '-' && s[i+1] == '-')
		{
			ans += '2';
			i++;
		}
	}
	cout<<ans;
}