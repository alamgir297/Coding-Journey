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
        ll n,x,y,ans=0;
        cin>>x>>y;
        if(x==1){
            if((y&1)==1){
                cout<< y*y<<endl;
            }
            else{
                ll tmp=y-1;
                cout<<(tmp*tmp)+1<<endl;
            }
        }
        else if(y==1){
            if((x&1)==1){
                ll tmp=x-1;
                cout<<(tmp*tmp)+1<<endl;
            }
            else{
                cout<<x*x<<endl;
            }
        }
        else{
            if(x>=y){
                if((x&1)==1){
                    ll tmp=x-1;
                    tmp=(tmp*tmp)+1;
                    cout<<tmp+(y-1)<<endl;
                }
                else{
                    cout<<(x*x)-(y-1)<<endl;
                }
            }
            else{
                if((y&1)==1){
                    cout<< (y*y)-(x-1)<<endl;
                }
                else{
                    ll tmp=y-1;
                    tmp=(tmp*tmp)+1;
                    cout<<tmp+(x-1)<<endl;
                }
            }
        }
    }
    return 0;
}
