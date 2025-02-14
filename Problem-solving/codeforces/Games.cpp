#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define space " "
#define newline cout<<"\n";
#define pb push_back
#define start begin()
#define finish end()
#define max_size 2000000
#define yes "YES\n"
#define no "NO\n"
#define fastIO() ({\
        ios_base::sync_with_stdio(false);\
        cin.tie(NULL);\
        })
using namespace std;

int main()
{
    fastIO();
    int n;
    cin>>n;
    vector<pair<int,int>> unifors;
    for(int i=0; i<n; i++){
        int x,y;
        cin>>x>>y;
        unifors.pb({x,y});
    }
    int cnt=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i!=j){
                if(unifors[i].first==unifors[j].second){
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
