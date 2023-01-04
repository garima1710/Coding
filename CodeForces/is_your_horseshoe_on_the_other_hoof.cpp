#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a;
	map<int,int> mp;
	for(int i=0;i<4;i++)
	{
		cin>>a;
		mp[a]++;
	}
	cout<<(4-mp.size());
}