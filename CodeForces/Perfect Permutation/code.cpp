#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	if(n%2 == 1)
	{
		cout<<"-1";
		return 0;
	}
	int ar[n];
	// ar[0]=2;
	for(int i=0;i<n;i++)
		ar[i] = i+1;
	for(int i=0;i<n-1;i=i+2)
		swap(ar[i],ar[i+1]);
	for(int i=0;i<n;i++)
		cout<<ar[i]<<" ";
	return 0;
}