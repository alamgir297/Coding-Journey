#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define space " "
#define newline cout<<"\n";
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
    fastIO();
    int n,m;
    while(cin>>n){
        cin>>m;
        int ar[n];
        for(int i=0; i<n; i++) cin>>ar[i];
        sort(ar, ar+n, greater<int>());
        int sum=0,cnt=0,i=0;
        while(sum<m){
            sum+=ar[i];
            i++;
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
