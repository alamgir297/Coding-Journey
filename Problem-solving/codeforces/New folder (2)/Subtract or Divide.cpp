#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define space " "
#define newline printf("\n")
#define PB push_back
#define max_size 1000000

using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();
    int t,n,cnt;
    cin>>t;
    while(t--){
        cnt=0;
        cin>>n;
        if(n%2==0 && n>3){
            n=n/(n/2);
            n--;
            if(n==1) cnt=2;
        }
        else if(n%2!=0 &&n>3){
            n--;
            n/=(n/2);
            n--;
            if(n==1) cnt=3;
        }
        else if(n==1) cnt=0;
        else if(n==2) cnt=1;
        else if(n==3) cnt=2;
        cout<<cnt<<endl;
    }
    return 0;
}
