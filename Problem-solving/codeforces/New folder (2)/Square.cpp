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
//    fastIO();
    int a,b,c,d,t,area,x,y;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        area=a*b+c*d;
        x=sqrt(area);
        if(x*x==area&&((a!=1&&b!=1) || (c!=1&&d!=1))) cout<< "YES\n";
        else cout<< "NO\n";
    }
    return 0;
}
