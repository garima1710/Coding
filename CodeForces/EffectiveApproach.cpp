#include <bits/stdc++.h>
using namespace std;
int main() {
	 int n, a, index1[100001];
	    cin>>n;
	    for (int i = 1; i <= n; ++i)
	    {
	        cin>>a;
	        index1[a] = i;
	    }
	    int m, b;
	    cin>>m;
	    long long x = 0,y = 0;
	    while (m--)
	    {
	        cin>>b;
	        x += index1[b];
	        y += (n + 1 - index1[b]);
	    }
	   cout<<x<<" "<<y<<endl;
		return 0;
}