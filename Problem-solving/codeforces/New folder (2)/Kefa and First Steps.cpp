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
    int n,x,mx=0,tmp,cnt=1;
    cin>>n;
    cin>>x;
    tmp=x;
    n--;
    while(n--){
        cin>>x;
        if(x>=tmp){
            cnt++;
            tmp=x;
        }
        else{
            mx=max(mx,cnt);
            cnt=1;
            tmp=x;
        }
    }
    mx=max(cnt, mx);
    cout<<mx<<endl;
    return 0;
}
