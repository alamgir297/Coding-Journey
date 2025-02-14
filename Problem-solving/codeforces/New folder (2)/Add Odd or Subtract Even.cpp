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
    int t,a,b,flag,cnt;
    cin>>t;
    while(t--){
            flag=0,cnt=0;
        cin>>a>>b;
        if(a==b) cout<< "0\n";
        else if((a>b && (a-b)%2==0)  || a<b && (b-a)%2!=0) cout<< "1\n";
        else cout<< "2\n";

    }
    return 0;
}
