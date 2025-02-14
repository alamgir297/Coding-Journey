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
#define max_size 1000009
#define yes "YES\n"
#define no "NO\n"
#define fastIO() ({\
        ios_base::sync_with_stdio(false);\
        cin.tie(NULL);\
        })
using namespace std;
vector<int>primes;
bool ar[max_size];
void seive(){
    int n=max_size;
    primes.pb(2);
    ar[0]=1, ar[1]=1;
    for(int i=4; i<=n; i+=2) ar[i]=1;
    for(int i=3; i<=n; i+=2){
        if(ar[i]==0){
            primes.pb(i);
            if(i>n/i) continue;
            for(int j=i*i; j<=n; j+=(2*i)) ar[j]=1;
        }
    }
}
int main()
{
//    fastIO();
    seive();
    int n;
    while(cin>>n){
        if(ar[n]) cout<<n<< " is not prime.\n";
        else{
            string s=to_string(n);
            reverse(s.start,s.finish);
            int tmp=stoi(s);
            if(!ar[tmp]) cout<< n << " is emirp.\n";
            else cout<< n << " is prime.\n";
        }
    }
    return 0;
}
