#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double n,x,sum=0;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		cin>>x;
		sum += x;
	}
	cout<<(sum/n);
	return 0;
}