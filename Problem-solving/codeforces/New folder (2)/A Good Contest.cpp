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
    int n,flag=0;
    cin>>n;
    while(n--){
        string name;
        int before, after, red=2400;
        cin>>name;
        cin>>before>>after;
        if(before>=red && after>before){
            flag=1;
        }
    }
    if(flag) cout<< "YES\n";
    else cout<< "NO\n";
    return 0;
}
