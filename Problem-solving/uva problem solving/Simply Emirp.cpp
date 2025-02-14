#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define space " "
#define newline cout<<"\n";
#define pb push_back
#define start begin()
#define finish end()
#define max_size 1000005
#define yes "YES\n"
#define no "NO\n"
#define fastIO() ({\
        ios_base::sync_with_stdio(false);\
        cin.tie(NULL);\
        })
using namespace std;
bool stts[max_size];
vi primes;
void seive(){
    int n=max_size;
    primes.pb(2);
    for(int i=3; i<n; i+=2){
        if(stts[i]==false){
            primes.pb(i);
            if(i>n/i) continue;
            for(int j=i*i; j<=n; j+=(2*i)) stts[j]=true;
        }
    }
}
int main()
{
    fastIO();
    seive();
    int n;
    while(cin>>n){
        if(!binary_search(primes.start, primes.finish, n)){
            cout<<n<< " is not prime.\n";
        }
        else{
            string s=to_string(n);
            reverse(s.start, s.finish);
            int tmp=stoi(s);
            if(binary_search(primes.start, primes.finish, tmp) && tmp!=n){
                cout<<n<< " is emirp.\n";
            }
            else cout<<n<< " is prime.\n";
        }
    }
    return 0;
}
