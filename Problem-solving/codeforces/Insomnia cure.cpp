#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define space " "
#define newline cout<<"\n";
#define pb push_back
#define start begin()
#define finish end()
#define max_size 100005
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
    vi input(4);
    int flag=0,d;
    for(int i=0; i<4; i++) cin>>input[i];
    cin>>d;
    int cnt[d+5]={0};
    int dmgd=0;
    for(int i=0; i<4; i++){
        if(input[i]==1){
            flag=1;
            break;
        }
        else{
            for(int j=1; j*input[i]<=d; j++){
                cnt[j*input[i]]=1;
            }
        }
    }
    if(!flag){
        for(int i=1; i<=d; i++){
            if(cnt[i]==1) dmgd++;
        }
        cout<<dmgd<<endl;
    }
    else cout<<d<<endl;
    return 0;
}
