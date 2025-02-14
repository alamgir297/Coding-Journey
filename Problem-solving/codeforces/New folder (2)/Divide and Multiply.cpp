#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
ll arSum(ll ar[],int n){
    ll sum=0;
    for(int i=0; i<n; i++) sum+=ar[i];
    return sum;
}
ll calculate(ll ar[], int n){
    ll sum,cnt=0;
    for(int i=0;i<n; i++){
        while(ar[i]%2==0){
            ar[i]/=2;
            cnt++;
        }
    }
//    cout<<cnt<<endl;
    sort(ar,ar+n,greater<int>());
    ar[0]=ar[0]*pow(2,cnt);
    sum=arSum(ar,n);
    return sum;
}
int main()
{
//    fastIO();
    int t,n;
    ll ar[16],sum;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++) cin>>ar[i];
        sum=calculate(ar,n);
        cout<<sum<<endl;
    }
    return 0;
}
