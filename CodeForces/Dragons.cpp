#include<bits/stdc++.h>
using namespace std;

int main()
{
	int s,n;
	// cin>>s>>n;
	pair<int,int> a[1000];
	while(cin>>s>>n)
    {
        int c=1;
        for(int i=0;i<n;i++)
        {
            cin>>a[i].first>>a[i].second;

        }
        sort(a,a+n);
	     for(int i=0;i<n;i++)
	     {
	         if(s<=a[i].first)
	         {
	             c=0;
	             break;
	         }
	         else
	        	s=s+a[i].second;
	     }
         c == 0 ? cout<<"NO" : cout<<"YES";
    }
	return 0;
}