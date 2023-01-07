#include <bits/stdc++.h>
using namespace std;

long long func(long long n,long long k)
{
	long long mid = (n+1)/2;
	if(k <= mid)
		return (2*k - 1);
	else
		return 2*(k-mid);
}

int main()
{
	long long a,b;
	cin>>a>>b;
	cout<<func(a,b);

	return 0;
}