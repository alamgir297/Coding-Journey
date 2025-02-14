#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s, str= "";
    vector<string>v;
	cin>>s;
	char c;
	for(size_t i=0; i<s.size(); i++){
        c=tolower(s[i]);
        if(c!='a' &&c!='e' &&c!='i' &&c!='o' &&c!='u' &&c!='y'){
            str.push_back('.');
            str+=c;
        }
	}
	cout<<str<<endl;
    return 0;
}
