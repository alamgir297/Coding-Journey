#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int ar[n];
        vector<int>v;
        map<int, int> mapp;
        for(int i=0; i<n; i++){
            cin>>ar[i];
            mapp[ar[i]]++;
        }
        int flag=1,ans=0,flag2=0;
        if(k==0){
            int sz=0;
            for(int i=1; i<=n; i++){
                if(mapp[i]>0){
                    sz+=mapp[i];
                    mapp[i]=0;
                }
                if(sz>=m) flag2=1;
            }
            if(sz>=m) flag2=1;
        }
        for(int i=0; i<k; i++){
            if(mapp[i]>0){
                v.push_back(i);
                mapp[i]--;
            }
            else{
                flag=0;
                break;
            }
        }
        if(v.size()>m) ans=0;
        else{
            if(flag){
                int sz=v.size();
                if(sz!=m){
                    for(int j=0; j<=n; j++){
                        if(j==k) continue;
                        if(mapp[j]>0){
                            sz+=mapp[j];
                            mapp[j]=0;
                        }
                        if(sz>=m){
                            ans=1;
                            break;
                        }
                    }
                    if(sz>=m){
                        ans=1;
                    }
                    else ans=0;
                }
                else ans=1;
            }
            else ans=0;
        }

        if(ans || flag2) cout<< "YES\n";
        else cout<< "NO\n";

    }
}
