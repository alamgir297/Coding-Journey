#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

int main()
{
    int t,n,x,y;
    cin>>t;
    while(t--){
        int flag=0,sum=0;
        cin>>n>>x;
        vector<int>a,b;
        for(int i=0; i<n; i++){
            cin>>y;
            a.push_back(y);
        }
        for(int i=0; i<n; i++){
            cin>>y;
            b.push_back(y);
        }
        sort(b.begin(), b.end(), greater<int>());
        for(int i=0; i<n; i++){
            sum=a[i]+b[i];
            if(sum>x){
                flag=0;
                break;
            }
            else flag=1;
        }
        if(flag) cout<< "Yes\n";
        else cout<< "No\n";
        a.clear(), b.clear();
    }
    return 0;
}
