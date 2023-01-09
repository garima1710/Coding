#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	long long ar[m];

	for(int i=0;i<m;i++)
		cin>>ar[i];
	long long sum = ar[0]-1;
	for(int i=1;i<m;i++)
	{
		if(ar[i] > ar[i-1])
			sum += (ar[i]-ar[i-1]);
		else if(ar[i] < ar[i-1])
			sum += (n-ar[i-1]+ar[i]);
	}
	cout<<sum;
}