#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	map<string,int> mp;

	string str,ans;
	int maxi=0;
	for(int i=0;i<n;i++)
	{
		cin>>str;
		mp[str]++;
		if(mp[str] > maxi)
		{
			maxi = mp[str];
			ans = str;
		}
	}
	cout<<ans;
}