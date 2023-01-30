#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n;
	cin>>n;
	long long int ar[n];
	for(long long int i=0;i<n;i++)
		cin>>ar[i];
	sort(ar,ar+n);

	long long int a(0),b(0);
	if(ar[0] == ar[n-1])
		cout<<ar[n-1]-ar[0]<<" "<<n*(n-1)/2;
	else
	{	
		for(long long int i=0;i<n;i++)
		{
			if(ar[i] == ar[0]){
				// cout<<"ar[i] : "<<ar[i]<<" ar[i+1] : "<<ar[i+1]<<endl;
				a++;
			}
			if(ar[i] == ar[n-1]){
				// cout<<"ar[i] : "<<ar[i]<<" ar[i-1] : "<<ar[i-1]<<endl;
				b++;
			}
		}
		cout<<ar[n-1]-ar[0]<<" "<<a*b;
	}	
}