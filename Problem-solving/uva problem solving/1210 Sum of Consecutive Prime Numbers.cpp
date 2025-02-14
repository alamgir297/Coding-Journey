#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define space " "
#define newline cout<<"\n";
#define pb push_back
#define start begin()
#define finish end()
#define max_size 10001
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
    int n,sum=0;
    int cntAr[max_size]={0};
    for(int i=0; i<primes.size(); i++){
        sum=0;
        for(int j=i;j<primes.size(); j++){
            sum+=primes[j];
            if(sum<=10000){
                cntAr[sum]++;
            }
            else break;
        }
    }
    while(cin>>n){
        if(n==0) break;
        cout<<cntAr[n]<<endl;
    }
    return 0;
}
