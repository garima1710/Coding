#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int max = arr[0];
	int min = arr[0];
	int x=0,y=0;

	for(int i=1;i<n;i++)
	{
		if(max < arr[i])
		{
			max = arr[i];
			x = i;
		}
		if(min >= arr[i])
		{
			min = arr[i];
			y = i;
		}
	}
	// cout<<x<<" "<<y;
	cout<<x + (n-1-y) - (y < x ? 1 : 0);
}