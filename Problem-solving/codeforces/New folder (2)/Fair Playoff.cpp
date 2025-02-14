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
    int t,x,c1,c2;
    cin>>t;
    while(t--){
        vi v;
        for(int i=0; i<4; i++){
            cin>>x;
            v.push_back(x);
        }
        c1=max(v[0], v[1]), c2=max(v[2], v[3]);
        sort(v.begin(), v.end());
        if((c1==v[2]|| c1==v[3]) && (c2==v[2]|| c2==v[3])) cout<< "YES\n";
        else cout<< "NO\n";
        v.clear();
    }

    return 0;
}
