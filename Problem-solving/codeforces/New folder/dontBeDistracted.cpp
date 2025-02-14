#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n;
	string s;
	cin>>t;
	while(t--){
        bool flag=false;
        vector<string>temp;
        vector<string>::iterator it;
        cin>>n>>s;
        for(int i=0; i<n; i++){
            string st;
            if(s[i]==s[i+1]){
                st+=s[i];
                temp.push_back(st);
                flag=true;
            }
            else{
                it=find_if(temp.begin(), temp.end(), st);
                if(it!=temp.end()) flag=false;
                else{
                    st+=s[i];
                    temp.push_back(st);
                    flag=true;
                }
            }
        }
        if(flag) cout<< "YES\n";
        else cout<< "NO\n";
	}
    return 0;
}
