#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n][3];

	for(int i=0;i<n;i++)
		for(int j=0;j<3;j++)
			cin>>arr[i][j];

	int sum;
	int c=0;
	for(int i=0;i<n;i++)
	{
		sum=0;
		for(int j=0;j<3;j++)
			sum += arr[i][j];
		if(sum >= 2)
			c++;
	}
	cout<<c;
}