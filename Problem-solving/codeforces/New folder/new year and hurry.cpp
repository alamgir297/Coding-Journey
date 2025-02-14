#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;
int main()
{
    int n,k,remain;
    while(cin>>n>>k){
        remain=240-k;
        int x=0,cnt=0;
        for(int i=1; i<=n; i++){
            x+=(i*5);
            if(x>remain) break;
            else
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
