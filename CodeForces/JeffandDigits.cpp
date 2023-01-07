#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int a;
	int f=0,z=0;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(a == 5)
			f++;
		else if(a == 0)
			z++;
	}
	if(z == 0)
		cout<< -1;
	else if(f < 9)
		cout<<0;
	else{
		f -= f%9;
		for(int i=0;i<f;i++)
			cout<<5;
		for(int i=0;i<z;i++)
			cout<<0;
	}

}