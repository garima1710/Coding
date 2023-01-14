#include <bits/stdc++.h>
using namespace std;

int main()
{
	int k,count=0;
	char ch;
	cin>>k;
	string s;
	cin>>s;
	int l=s.size();
	sort(s.begin(),s.begin()+s.size());
	for(int i=0;i<s.size();i++){
	    if(i%k==0){
	       ch=s[i]; 
	    }
	    if(s[i]==ch){
	        count++;
	    }
	}
	if(l==count && count%k==0){
	    for(int i=0;i<k;i++){
	        for(int l=0;l<s.size();l+=k){
	            cout<<s[l];
	        }
	    }
	}else{
	    cout<<"-1";
	}

	return 0;
	// int k;
	// cin>>k;
	// string str;
	// cin>>str;
	// string ans;

	// map<char,int> mp;

	// for(int i=0;i<str.length();i++)
	// 	mp[str[i]]++;

	// for(auto i : mp)
	// 	if(i.second != k)
	// 	{
	// 		cout<<-1;
	// 		return 0;
	// 	}
	// for(auto i : mp)
	// 	ans = ans + i.first;
	// for(int i=0;i<k;i++)
	// 	cout<<ans;
}