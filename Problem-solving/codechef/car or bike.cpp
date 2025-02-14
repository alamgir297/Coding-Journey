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
#define yes "YES\n"
#define no "NO\n"

using namespace std;
int ceiling(int n,int x){
    if(n%x==0) return n/x;
    return n/x+1;
}
int main()
{
    //fastIO();
    int t,n,x,y;
    cin>>t;
    while(t--){
        cin>>n>>x>>y;
        vi ans;
        int tm=ceiling(n,100)*x;
        ans.pb(tm);
        tm=ceiling(n,4)*y;
        ans.pb(tm);
        if(x==y){
            ans.pb(ceiling(n,100)*x);
        }
        else if(x>y){
            if(n/100<n/4){
                int tmp=n%100,an=(n/100)*x;
                int x=ceiling(tmp,4)*y;
                an+=x;
                ans.pb(an);
            }
            else{
                int tmp=n%4,an=(n/4)*y;
                int x=ceiling(tmp,100)*x;
                an+=x;
                ans.pb(an);
            }
        }
        else if(x>y){
            if(n/100<n/4){
                int tmp=n%100,an=(n/100)*x;
                int x=ceiling(tmp,4)*y;
                an+=x;
                ans.pb(an);
            }
            else{
                int tmp=n%4,an=(n/4)*y;
                int x=ceiling(tmp,100)*x;
                an+=x;
                ans.pb(an);
            }
        }
//        for(auto i: ans) cout<<i<<space;
//        newline;
        cout<<*min_element(ans.start,ans.finish)<<endl;
    }
    return 0;
}
