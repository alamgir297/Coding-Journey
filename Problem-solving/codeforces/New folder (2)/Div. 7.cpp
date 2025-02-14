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
        if(n%7==0) cout<<n<<endl;
        else{
            x=(n/10)*10;
            for(int i=x; ; i++){
                if(i%7==0){
                    cout<<i<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
