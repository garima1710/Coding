#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,a;
	cin>>n>>m;
	int ar[n];
	
	for(int i=0;i<n;i++)
		cin>>ar[i];

	sort(ar,ar+n);

	int s(0);
    for (int i = 0; i < m; ++i)
    {
        if (ar[i] >= 0)
        {
            break;
        }
        s += ar[i];
    }
    cout << -s << endl;
	return 0;
}