#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;

	int x = min((k*l)/nl,(c*d));
	x = min(x,p/np)/n;

	cout<<x;
	return 0;
}