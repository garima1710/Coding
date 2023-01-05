#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s1,s2;
	cin>>s1>>s2;

	int l = s1.length();
	char a,b;
	for(int i=0;i<l;i++)
	{
		a = toupper(s1[i]);
		b = toupper(s2[i]);
		if(a>b)
		{
			cout<<"1";
			return 0;	
		}
		else if(a<b)
		{
			cout<<"-1";
			return 0;
		}
	}
	cout<<"0";
	return 0;
}