#include <bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cin>>str;

	int l = str.length();
	int cnt = 1;
	for(int i=1;i<l;i++)
	{
		// cout<<str[i];
		if(str[i] == str[i-1])
			cnt++;
		else
			cnt = 1;
		// cout<<" - "<<cnt<<endl;
		if(cnt >= 7)
		{
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}