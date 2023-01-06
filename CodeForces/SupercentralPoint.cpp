#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int ar[n][2];
	int x,y;
	
	for(int i=0;i<n;i++)
		for(int j=0;j<2;j++)
			cin>>ar[i][j];

	int l,r,u,d,cnt=0;
	for(int i=0;i<n;i++)
	{
		l=0,r=0,u=0,d=0;
		x = ar[i][0];
		y = ar[i][1];
		for(int j=0;j<n;j++)
		{
			if(ar[j][0] == x && ar[j][1] > y)
				u++;
			if(ar[j][0] == x && ar[j][1] < y)
				d++;
			if(ar[j][0] > x && ar[j][1] == y)
				r++;
			if(ar[j][0] < x && ar[j][1] == y)
				l++;
		}
		// cout<<u<<d<<r<<l<<endl;
		if(l !=0 && r !=0 && u !=0 && d !=0)
			cnt++;
	}
	cout<<cnt;
}