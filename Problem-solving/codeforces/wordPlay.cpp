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
        map<string,int>cnt;
        map<string,int>mp1,mp2,mp3;
        set<string>st;
        int n;
        cin>>n;
        string s;
        for(int i=1; i<=3; i++){
            for(int j=0; j<n; j++){
                cin>>s;
                st.insert(s);
                cnt[s]++;
                if(i==1){
                    mp1[s]=1;
                }
                if(i==2) mp2[s]=1;
                if(i==3) mp3[s]=1;

            }
        }
        int p1=0,p2=0,p3=0;
        for(auto it: st){
            int tmp=cnt[it];
            if(tmp==1){
                if(mp1[it]) p1+=3;
                if(mp2[it]) p2+=3;
                if(mp3[it]) p3+=3;
            }
            else if(tmp==2){
                if(mp1[it]){
                    p1+=1;
                }

                if(mp2[it]) p2+=1;
                if(mp3[it]) p3+=1;
            }
        }
        cout<<p1<<space<<p2<<space<<p3<<endl;
    }
    return 0;
}
