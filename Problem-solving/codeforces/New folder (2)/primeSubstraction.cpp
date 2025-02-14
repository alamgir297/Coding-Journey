#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define space " "
#define newline printf("\n")
#define max_size 1000000
using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int ar[max_size];
vi v;
void seive(){
    int i,j,k,n=max_size;
    v.push_back(2);
    for(i=3; i<n; i+=2){
       if(ar[i]==0){
            v.push_back(i);
            if(i>n/i) continue;
            for(j=i*i; j<=n; j+=i+i) ar[j]=1;
       }
    }
}
int main()
{
    fastIO();
//    seive();
    ll t,n,x,y,flag;
    cin>>t;
    while(t--){
        flag=0;
        cin>>x>>y;
        n=x-y;
        if(n>1) cout<< "YES\n";
        else cout<< "NO\n";
    }
    return 0;
}
