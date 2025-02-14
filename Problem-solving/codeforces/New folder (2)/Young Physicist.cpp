#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();
    int n,a,b,c,sumA=0,sumB=0,sumC=0,total=0;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        sumA+=a, sumB+=b, sumC+=c;
    }
    if(sumA==0 && sumB==0 && sumC==0) cout<< "YES\n";
    else cout<< "NO\n";

    return 0;
}
