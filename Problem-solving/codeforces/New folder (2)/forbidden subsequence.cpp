#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

int main()
{
    int t;
    string s,T;
    cin>>t;
    while(t--){
        cin>>s>>T;
        string str=s;
        sort(s.begin(),s.end());
        int x=patSearch(s,T);
        if(x==-1) cout<<s<<endl;
        else{
            swap(s[x],s[x+1]);
            cout<<s<<endl;
        }
    }
    return 0;
}
