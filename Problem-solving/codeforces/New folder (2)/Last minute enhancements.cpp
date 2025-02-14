#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define space " "
#define newline printf("\n")
#define PB push_back
#define start begin()
#define last end()
#define max_size 1000000

using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();
    int t,n,x,a;
    cin>>t;
    while(t--){
        cin>>n;
        int cnt=1,ans=0;
        vi v(n);
        set<int>st;
        for(int i=0; i<n; i++){
            cin>>x;
            if(st.count(x)) x++;
            st.insert(x);
        }
        cout<<st.size()<<endl;
    }
    return 0;
}
