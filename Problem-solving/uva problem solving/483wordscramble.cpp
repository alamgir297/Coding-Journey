#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(getline(cin, s)){
        vector<string> v;
        string str;
        for(size_t i=0; i<s.size(); i++){
            if(s[i]==' '){
                v.push_back(str);
                str.clear();
            }
            else
                str=s[i]+str;
        }
        v.push_back(str);
        for(size_t i=0; i<v.size()-1; i++){
            cout<<v[i]<<" ";
        }
        int sz=v.size()-1;
        cout<<v[sz]<<"\n";
    }
    return 0;
}
