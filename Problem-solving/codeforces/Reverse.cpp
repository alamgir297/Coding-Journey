#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define space " "
#define newline cout<<"\n";
#define pb push_back
#define start begin()
#define finish end()
#define max_size 2000000
#define fastIO() ({\
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);\
})

using namespace std;

int main()
{
    fastIO();
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int sorted=1,flag=0,x,tmp,posI=0,posJ=0;
        vi v;
        cin>>tmp;
        v.pb(tmp);
        for(int i=0; i<n-1; i++){
            cin>>x;
            if(tmp>x) sorted=0;
            tmp=x;
            v.pb(tmp);
        }
        for(int i=0; i<n; i++){
            if(flag) break;
            tmp=v[i];
            if(tmp!=i+1){
                posI=i+1;
                for(int j=i+1; j<n; j++){
                    if(v[j]==posI){
                        posJ=j+1;
                        flag=1;
                        break;
                    }
                }
            }
        }
        if(sorted) flag=1;
        else{
            reverse(v.start+posI-1, v.start+posJ);
        }
        for(int i=0; i<v.size(); i++) cout<<v[i]<<space;
        newline;
    }
    return 0;
}
