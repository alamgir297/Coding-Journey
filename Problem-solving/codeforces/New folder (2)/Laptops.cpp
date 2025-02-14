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
    int n,flag=0;
    cin>>n;
    pair<int,int> l[n];
    for(int i=0; i<n; i++) cin>>l[i].first>>l[i].second;
    sort(l,l+n);
    n--;
    for(int i=0;i<n; i++){
        if(l[i].first<l[i+1].first && l[i].second>l[i+1].second){
            flag=1;
            break;
        }
    }
    if(flag) cout<< "Happy Alex\n";
    else cout<< "Poor Alex\n";
    return 0;
}
