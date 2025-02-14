#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();
    int t,x,n,ar[103],tmp;
    cin>>t;
    while(t--){
        int flag=0;
        cin>>n;
        for(int i=0; i<n; i++) cin>>ar[i];
        for(int i=0; i<n; i++){
            if(flag) break;
            for(int j=i+1; j<n; j++){
                if(ar[i]==ar[j]){
                    tmp=ar[i];
                    flag=1;
                    break;
                }
            }
        }
        for(int i=0; i<n; i++){
            if(ar[i]!=tmp){
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}
