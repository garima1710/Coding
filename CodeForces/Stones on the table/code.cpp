#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n;
	string str;
	cout<<"Enter str : ";
	cin>>n>>str;
	int c=0;
	for(int i=1;i<n;i++)
	{
		if(str[i-1] == str[i])
			c++;
	}
	cout<<c;
	return 0;
}
