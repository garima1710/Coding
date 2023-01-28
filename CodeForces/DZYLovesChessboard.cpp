#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	char ar[n][m];

	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>ar[i][j];

	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			if(ar[i][j] == '.')
				(i+j)%2 == 0 ? ar[i][j] = 'B' : ar[i][j] = 'W';

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cout<<ar[i][j];
		cout<<endl;
	}
	return 0;
}