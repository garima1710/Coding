#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m, last;
    double t, max(0);
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        if (ceil(t / m) >= max)
        {
        	// cout<<t<<"/"<<m<<" = "<<ceil(t/m)<<endl;
            last = i;
            max = ceil(t / m);
            // cout<<"max = "<<max<<endl;;
        }
    }

    cout << last;
    return 0;

}