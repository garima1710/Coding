#include <bits/stdc++.h>
using namespace std;

double func(double s1,double s2,double s3)
{
	double a = sqrt(s1 * s2 / s3);
	double b = sqrt(s3 * s1 / s2);
	double c = sqrt(s3 * s2 / s1);
	return 4*(a+b+c);
}

int main()
{
	double s1,s2,s3;
	cin>>s1>>s2>>s3;
	cout<<func(s1,s2,s3);

	return 0;
}