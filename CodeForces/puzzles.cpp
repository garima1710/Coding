#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;

	int ar[m];
	for(int i=0;i<m;i++)
		cin>>ar[i];

	sort(ar,ar+m);
	int mini = INT_MAX;
	for(int i=0;i<m-n+1;i++)
	{
		// cout<<ar[i]<<ar[i+n-1]<<endl;
		// cout<<abs(ar[i] - ar[i+n-1])<<endl;
		if(abs(ar[i] - ar[i+n-1]) < mini)
			mini = abs(ar[i] - ar[i+n-1]);
	}
	cout<<mini;
	return 0;
}