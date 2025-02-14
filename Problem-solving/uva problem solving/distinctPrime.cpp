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
#define max_size 4000
#define yes "YES\n"
#define no "NO\n"
#define debug cout<< "here\n"
#define fastIO() ({\
        ios_base::sync_with_stdio(false);\
        cin.tie(NULL);\
        })
using namespace std;
bool ar[max_size];
vi primes;
void sieve(){
    int n=max_size;
    primes.pb(2);
    for(int i=3; i<n; i+=2){
        if(!ar[i]){
            primes.pb(i);
            if(i>n/i) continue;
            for(int j=i*i; j<=n; j+=(2*i)) ar[j]=true;
        }
    }
}
int main()
{
    fastIO();
    sieve();
    vi lucky;
    for(int i=20; i<=3000; i++){
        int cnt=0,flag=0,n=i;
        for(int j=0; primes[j]*primes[j]<=i; j++){
            int cur=primes[j];
            if(i%cur==0){
                cnt++;
                while(n%cur==0){
                    n/=cur;
                }
            }
        }
        if(n!=1) cnt++;
        if(cnt>=3){
            lucky.pb(i);
        }
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<lucky[n-1]<<endl;
    }
    return 0;
}
