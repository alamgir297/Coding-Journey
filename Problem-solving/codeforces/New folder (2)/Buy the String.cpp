#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();
    int t,n,c0,c1,h;
    cin>>t;
    while(t--){
        int sum=0;
        cin>>n>>c0>>c1>>h;
        string s;
        cin>>s;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1'){
                sum+=min(c1,h+c0);
            }
            else sum+=min(c0,h+c1);
        }
        cout<<sum<<endl;
    }
    return 0;
}
