#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int ai,bi;
	cin>>ai>>bi;
	int maxi = ai+bi;
	int sum = maxi;
	for(int i=1;i<n;i++)
	{
		cin>>ai>>bi;
		sum = sum - ai + bi;
		if(sum>maxi)
			maxi = sum;
	}
	cout<<maxi;
	return 0;
}
