#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int ar[n];
	int index = n;

	for(int i=0;i<n;i++)
		cin>>ar[i];

	int mini = abs(ar[n-1]-ar[0]);

	for(int i=0;i<n-1;i++)
		if(abs(ar[i] - ar[i+1]) < mini)
		{
			mini = abs(ar[i] - ar[i+1]);
			index = i+1;
		}
	if(index == n)
		cout<<index<<" 1";
	else
		cout<<index<<" "<<index+1;
	return 0;
}