#include<iostream>
using namespace std;

bool isprime(int n)
{
	for(int i=2;i<n;i++)
		if(n%i == 0)
			return false;
	return true;
}

int main()
{
	int x,y;
	cin>>x>>y;
	if(!isprime(y))
	{
		cout<<"NO";
		return 0;
	}
	for(int i=x+1;i<y;i++)
	{
		if(isprime(i))
		{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}