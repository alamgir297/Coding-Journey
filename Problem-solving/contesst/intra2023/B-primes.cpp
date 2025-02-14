#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;
int ar[10000100];
vector<int>v;
void seive(){
    int i,j,k,n=10000100;
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
    seive();
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        cout<<v[x-1]<<endl;
    }
    return 0;
}
