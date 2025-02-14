#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define space " "
#define newline printf("\n")

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
        int ar[n],num[110]={0},cnt=0;
        for(int i=0; i<n; i++){
            cin>>a;
            x=abs(a);
            num[x]++;
        }
        for(int i=0; i<110; i++){
            if(num[i]>0){
                if(num[i]>=2 && i!=0) cnt+=2;
                else cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
