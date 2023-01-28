#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int ar[m];
	int sum=0;

	for(int i=0;i<m;i++)
		cin>>ar[i];

	sort(ar,ar+m);

	int minimum(0), num(ar[0]), k(0);
    for (int i = 0; i < n; ++i)
    {
        minimum += num;
        num -= 1;
        if (num == 0)
        {
            num = ar[++k];
        }
    }

    sort(ar, ar + m, greater<int>());

    int maximum(0);
    while (n--)
    {
        maximum += ar[0];
        ar[0] -= 1;
        for (int i = 1; i < m; ++i)
        {
            if (ar[i] <= ar[i-1])
            {
                break;
            }
            swap(ar[i], ar[i-1]);
        }
    }

    cout << maximum << " " << minimum << endl;
	return 0;
}