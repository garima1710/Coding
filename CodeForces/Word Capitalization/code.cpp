#include<iostream>
#include<string>
using namespace std;

int main()
{
	/* code */
	string str;
	getline(cin,str);
	putchar(toupper(str[0]));
	for(int i=1;i<str.length();i++)
		putchar(str[i]);
	return 0;
}