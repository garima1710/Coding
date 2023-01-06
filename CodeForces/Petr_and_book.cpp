#include <bits/stdc++.h>
using namespace std;

int main()
{
	int p;
	cin>>p;
	int x=0;
	int ar[7];
	for(int i=0;i<7;i++)
		cin>>ar[i];
	int sum=ar[0];
	while(sum < p)
	{
		x++;
		x = x%7;
		sum += ar[x];
	}

	cout<<x+1;
}