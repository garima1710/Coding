#include <bits/stdc++.h>
using namespace std;

int func(int n,int ar[])
{
	if(n==0)
		return 0;
	sort(ar,ar+12);
	int sum = 0;
	for(int i=11;i>=0;i--)
	{
		sum += ar[i];
		if(sum >= n)
		{
			return (12-i);
			break;
		}
	}
	return -1;
}

int main()
{
	int n;
	cin>>n;
	int ar[12];

	for(int i=0;i<12;i++)
		cin>>ar[i];

	cout<<func(n,ar);
	return 0;
}