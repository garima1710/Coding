#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	getline(cin,str);

	int len = str.length(),u=0,l=0;
	for(int i=0;i<len;i++)
	{
		if(isupper(str[i]))
			u++;
		else
			l++;
	}
	if(u>l)
		for(int i=0;i<len;i++)
			putchar(toupper(str[i]));
		else
		for(int i=0;i<len;i++)
			putchar(tolower(str[i]));
	// cout<<str;
	return 0;
}