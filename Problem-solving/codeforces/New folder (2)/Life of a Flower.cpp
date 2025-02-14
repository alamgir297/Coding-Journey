#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

int main()
{
    int t,x,cnt,n,a,flag,v[103];
    cin>>t;
    while(t--){
        cnt=1,flag=0;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        for(int i=0; i<n-1; i++){
            if(v[i]==0 && v[i+1]==0 && n>1){
                cout<< "-1\n";
                flag=1;
                break;
            }
            else if(v[i]==1 && v[i+1]==1) {
                cnt+=5;
            }
            if(v[i]==0 && v[i+1]==1){
                cnt++;
            }
            else continue;
        }
        if(flag==0) cout<<cnt<<endl;
    }
    return 0;
}
