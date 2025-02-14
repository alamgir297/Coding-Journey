#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define space " "
#define newline cout<<"\n";
#define pb push_back
#define start begin()
#define finish end()
#define max_size 100010
#define yes "YES\n"
#define no "NO\n"
#define fastIO() ({\
        ios_base::sync_with_stdio(false);\
        cin.tie(NULL);\
        })
using namespace std;
int color[max_size];
bool ar[max_size];
void seive(int n){
//    int n=max_size;
    n+=10;
    color[2]=1;
    for(int i=4; i<=n; i+=2){
        color[i]=2;
    }
    for(int i=3; i<=n; i+=2){
        if(ar[i]==0){
            color[i]=1;
            if(i>n/i) continue;
            for(int j=i*i; j<=n; j+=i){
                ar[j]=1;
                color[j]=2;
            }
        }
    }
}
int main()
{
    fastIO();
    int t,n;
    cin>>n;
    seive(n);
//    cin>>t;
        if(n==1){
            cout<<1<<endl<<1<<endl;
        }
        else if(n==2){
            cout<<1<<endl<<1<<space<<1<<endl;
        }
        else{
            cout<<2<<endl;
            for(int i=2; i<n+2; i++) cout<<color[i]<<space;
            newline;
        }
    return 0;
}
