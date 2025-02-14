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
    int t,n,x;
    cin>>t;
    while(t--){
        cin>>n;
        int ar[n+1],cnt=0,tmp=0;
        for(int i=1; ; ){
            tmp++;
            cin>>x;
            if(x==i){
                cnt++;
                i++;
            }
            i++;
            if(tmp==n)break;

        }
        cout<<cnt<<endl;
    }
    return 0;
}
