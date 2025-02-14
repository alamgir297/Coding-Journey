#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;
int ar[1000010];
vector<int>v;
void seive(){
    int i,j,n=1000010;
    v.push_back(2);
    for(i=3; i<n; i+=2){
        if(ar[i]==0){
            v.push_back(i);
            if(i>n/i) continue;
            for(j=i*i; j<=n; j+=(i+i)) ar[j]=1;
        }
    }
}
int smallestPrime(ll n){
    for(int i=0; v[i]<=sqrt(n); i++){
        if(n%v[i]==0){
            return v[i];
            while(n%v[i]==0){
                n/=v[i];
            }
        }
    }
    if(n!=1){
        return n;
    }
    return 0;
}
int main()
{
    seive();
    int t;
    ll sum;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n;
         x=n;
         n--;
        sum=(n*(n+1))/2+smallestPrime(x)-1;
        cout<<sum<<endl;
    }
    return 0;
}
