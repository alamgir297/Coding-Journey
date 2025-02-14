#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define space " "
#define newline printf("\n")
#define pb push_back
#define start begin()
#define finish end()
#define max_size 1000000

using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
//    fastIO();
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vi v(n+1);
        v[n]=1;
        for(int i=1; i<=n-1; i++) v[i]=i+1;
        for(int i=1; i<v.size(); i++) cout<<v[i]<<space;
        cout<< "\n";
    }
    return 0;
}
