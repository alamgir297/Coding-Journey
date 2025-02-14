#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

int main()
{

    string s;
    vi v;
    while(cin>>s){
        for(int i=0; i<s.size(); i++){
            if(isdigit(s[i])){
                int digit=s[i]-'0';
                v.push_back(digit);
            }
        }
        sort(v.begin(), v.end());
        int sz=v.size()-1;
        for(int i=0; i<v.size()-1; i++){
            cout<<v[i]<< "+";
        }
        cout<<v[sz];
        cout<< "\n";
        v.clear();
    }
    return 0;
}
