#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define space " "
#define newline printf("\n")
#define pb push_back
#define start begin()
#define finish end()
#define max_size 100000

using namespace std;
int ar[max_size];
vi v;
void seive(){
    int i,j,n=max_size;
    v.pb(2);
    for(i=3; i<n; i+=2){
        if(ar[i]==0){
            v.pb(i);
            if(i>n/i) continue;
            for(j=i*i; j<=n; j+=(2*i)) ar[j]=1;
        }
    }
}
int almostPrime(int num){
    vi prime;
    for(int i=1; i<=num; i++){
        int cnt=0, n=i,x=i;
        for(int j=0; v[j]<=sqrt(n); j++){
            if(n%v[j]==0){
                cnt++;
                while(n%v[j]==0){
                    n/=v[j];
                }
            }
        }
        if(n!=1) cnt++;
//        cout<<i<<space<<cnt<<endl;
        if(cnt==2) prime.pb(i);
    }
    return prime.size();
}
void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();
    seive();
    int n;
    while(cin>>n){
        cout<<almostPrime(n)<<endl;
        int cnt=0,flag=0;
    }
    return 0;
}
