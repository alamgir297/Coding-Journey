#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,len;
	string s,s1;
	cin>>t;
	while(t--){
        cin>>s;
        len=s.size();
        if(len>10){
            string len2=to_string(len-2);
            s1=s[0]+len2+s[len-1];
            cout<<s1<<endl;
        }
        else cout<<s<<endl;
	}
    return 0;
}
