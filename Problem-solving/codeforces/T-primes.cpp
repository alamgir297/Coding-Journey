#include <bits/stdc++.h>
using namespace std;
int ar[1001001];
vector<long long int>v;
void sieve(){
    long long int n=1001001,i,j;
    v.push_back(4);
    for(i=3; i<n; i+=2){
        if(ar[i]==0){
            long long sq=i*i;
            v.push_back(sq);
            if(i+i>n) continue;
            for(j=i+i; j<=n; j+=i) ar[j]=1;
        }
//        long long sq=i*i;
//        if(sqrt(sq)==i) v.push_back(sq);
    }
}
int main()
{
    sieve();
    int t;
    long long int n;
    cin>>t;
    while(t--){
        cin>>n;
//        if(binary_search(v.begin(),v.end(),n)){
//            cout<< "YES\n";
//        }
//        else cout<< "NO\n";
        int flag=0;
        long long first=0,last=v.size()-1,mid;
        while(first<=last){
            mid=(first+last)/2;
            if(v[mid]==n){
                cout<< "YES\n";
                flag=1;
                break;
            }
            else if(v[mid]<n) first=mid+1;
            else last=mid-1;
        }
        if(flag==0) cout<< "NO\n";
    }
    return 0;
}
