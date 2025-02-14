#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;
vector<char>st;
void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
//    fastIO();
    int t,flag,n;
    string s,str;
    cin>>t;
    while(t--){
        flag=0;
        cin>>n>>s;
        for(int i=0; i<n; i++){
            if(flag){
                break;
            }
            if(s[i]!=s[i+1]){
                for(int j=0; j<st.size(); j++){
                    if(s[i]==st[j]){
                        flag=1;
                        cout<< "NO\n";
                        break;
                    }
                    else flag=0;
                }
                st.push_back(s[i]);
            }
        }
        if(flag==0) cout<< "YES\n";
        st.clear();
    }
    return 0;
}
