#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	long long a;
	cin>>a;
	long long mini = a;
	int index=0;
	int x;
	for(int i = 2;i<=n;i++)
	{
		cin>>a;
		if(a==mini)
			index++;
		if(a < mini)
		{
			x=i;
			mini = a;
			index = 0;
		}
	}
	if(index==0)
		cout<<x;
	else
		cout<<"Still Rozdil";

	return 0;
}