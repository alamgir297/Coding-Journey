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
    //fastIO();
    int n;
    while(cin>>n){
        int ar[n], mx=0,cnt=0,last;
        for(int i=0; i<n; i++) cin>>ar[i];
//        if(ar[0]==1) cnt++;
        for(int i=0; i<n; i++){
            if(ar[i]==1){
                cnt++;
                if(i==n-1){
                    for(int j=0; j<n;j++){
                        if(ar[j]==1){
                            cnt++;
                        }
                        else break;
                    }
                }
            }
            else{
                mx=max(cnt, mx);
                cnt=0;
            }
        }
        mx=max(cnt, mx);
        cout<<mx<<endl;
    }
    return 0;
}
