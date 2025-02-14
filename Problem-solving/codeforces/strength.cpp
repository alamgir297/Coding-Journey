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
        int n, mx=0,smx=0,x;
        cin>>n;
        int ar[n],ar2[n];
        for(int i=0; i<n; i++){
            cin>>x;
            ar[i]=x;
            ar2[i]=x;
            mx=max(mx,x);
        }
        sort(ar2,ar2+n);
        smx=ar2[n-2];
        for(int i=0; i<n; i++){
            if(ar[i]==mx){
                ar[i]-=smx;
            }
            else
                ar[i]-=mx;
        }
        for(int i=0; i<n; i++)cout<<ar[i]<<space;
        newline;
    }
    return 0;
}
