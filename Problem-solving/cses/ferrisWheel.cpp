#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define space " "
#define newline cout<<"\n";
#define pb push_back
#define all(v) v.begin(),v.end()
#define start begin()
#define finish end()
#define max_size 2000000
#define yes "YES\n"
#define no "NO\n"
#define debug cout<< "here\n"
#define fastIO() ({\
        ios_base::sync_with_stdio(false);\
        cin.tie(NULL);\
        })
using namespace std;

int main()
{
    fastIO();
    ll n,x;
    while(cin>>n>>x){
        vll v(n);
        map<int,int>mp;
        for(int i=0; i<n; i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        int rem=n;
        sort(all(v));
        int cnt=0;
        for(int i=0; i<n;i++){
            if(mp[v[i]]>0){
                int tmp=x-v[i];
                if(mp[tmp]>0){
                    if(mp[tmp]==1 && tmp==v[i]) continue;
                    cnt++;
//                    cout<<mp[tmp]<<space<<tmp<<endl;
                    mp[tmp]--;
                    mp[v[i]]--;
//                    debug;
                    rem-=2;
                    i++;
                }
            }
        }
        for(int i=0; i<n; ){
            if(rem==0) break;
            if(mp[v[i]]>0){
                int tmp=v[i];
                if(i+1<n){
                    for(int j=i+1; j<n; j++){
                        if(mp[v[j]]>0){
                            if(tmp+v[j]<x){
                                cnt++;
                                i=j+1;
                                rem-=2;
                                break;
                            }
                            else if(tmp+v[j]>x){
                                cnt+=rem;
                                rem=0;
                                break;
                            }
                        }
                    }
                }
                else{
                    cnt++;
                    rem=0;
                    break;
                }
            }
            else i++;
        }

        cout<<cnt<<endl;
    }
    return 0;
}
