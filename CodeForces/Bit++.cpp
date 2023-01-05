#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string str;
	int x=0;
	for(int i=0;i<n;i++)
	{
		cin>>str;
		for(int i=0;i<3;i++)
			if(str[i] == '+')
			{
				x++;
				break;
			}
			else if(str[i] == '-')
			{
				x--;
				break;
			}
	}
	cout<<x;
	return 0;
}