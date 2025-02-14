#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define space " "
#define newline cout<<"\n";
#define pb push_back
#define start begin()
#define finish end()
#define max_size 2000000
#define yes "YES\n"
#define no "NO\n"
#define fastIO() ({\
        ios_base::sync_with_stdio(false);\
        cin.tie(NULL);\
        })
using namespace std;

int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        vi v[n];
        map<int,int>mp;
        for(int i=0; i<n; i++){
            cin>>k;
            for(int j=0; j<k; j++){
                int t;
                cin>>t;
                v[i].push_back(t);
            }
        }
        set<int>st;
        int cnt=0,ans=0;
        for(int i=0; i<n; i++){
            if(ans) break;
            for(auto it: v[i]){
                st.insert(it);
            }
            for(int j=0; j<n; j++){
//                if(j==i) continue;
                for(auto it: v[j]){
                    st.insert(it);
                }
                if(st.size()==5){
                    ans=1;
                    break;
                }
                st.clear();
                for(auto it: v[i]) st.insert(it);
            }
        }
        if(ans) cout<< "YES\n";
        else cout<< "NO\n";
    }
    return 0;
}
