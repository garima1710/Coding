#include<iostream>
using namespace std;

int main()
{
	string str;
	cin>>str;
	int n = str.length();
	int low=0,mid=0,high=n-1;
	while(mid <= high)
	{
		if(str[mid] == '1')
		{
			swap(str[low],str[mid]);
			mid = mid+2;
			low = low+2;
		}
		else if(str[mid] == '2')
		{
			mid = mid+2;
		}
		else if(str[mid] == '3')
		{
			swap(str[high],str[mid]);
			high = high - 2;
		}
	}
	cout<<str;
	return 0;
}