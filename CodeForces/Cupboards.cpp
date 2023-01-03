#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int ar[n][2];
	
	for(int i=0;i<n;i++)
		for(int j=0;j<2;j++)
			cin>>ar[i][j];

	int sl=0,sr=0;
	for(int i=0;i<n;i++)
	{
		sl += ar[i][0];
		sr += ar[i][1];
	}
	cout<<(min(sl,n-sl) + min(sr,n-sr));
	return 0;
}