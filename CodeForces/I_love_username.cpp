#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int x;
	int cnt=0;
	cin>>x;
	int mini=x,maxi=x;

	for(int i=1;i<n;i++)
	{
		cin>>x;
		if(x<mini)
		{
			mini = x;
			cnt++;
		}
		if(x>maxi)
		{
			maxi = x;
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}