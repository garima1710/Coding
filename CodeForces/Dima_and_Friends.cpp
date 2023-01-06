#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int x,sum=0,ans=0;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		sum += x;
	}
	for(int i=1;i<=5;i++)
	{
		if((sum+i)%(n+1) != 1)
		{
			ans += 1;
		}
	}
	cout<<ans;
	return 0;
}