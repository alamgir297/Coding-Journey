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
    int t,tmp,n,x=2,y,remain,flag;
    cin>>t;
    while(t--){
        flag=0;
        cin>>n;
        remain=n%x;
        for(int j=3;j<=sqrt(n)+100; j++){
            tmp=n-remain;
            if(tmp%j==0){
                flag=1;
                y=j;
                break;
            }
            else flag=0;
        }
        if(!flag) y=n/2;
        cout<<x<<space<<y<<endl;
    }
    return 0;
}
