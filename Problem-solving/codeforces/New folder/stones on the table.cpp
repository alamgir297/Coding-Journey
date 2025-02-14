#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

int main()
{
    int n,cnt;
    while(cin>>n){
        string s; cnt=0;
        cin>>s;
        for(int i=0; i<n; i++){
            if(s[i]==s[i+1]) cnt++;
        }
        cout<<cnt<< "\n";
    }
    return 0;
}
