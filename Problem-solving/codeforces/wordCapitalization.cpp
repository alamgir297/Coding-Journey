#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s, str="";
	cin>>s;
	char c;
	for(int i=0; i<s.length(); i++){
        c=toupper(s[0]);
        s[0]=c;

	}
	cout<<s<<endl;
    return 0;
}
