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
//    fastIO();
    int t;
    cin>>t;
    while(t--){
        int n,m;
        map<int, int> map,map2;
        string s1,s2;
        cin>>n>>m>>s1>>s2;
        int pos=0;
        for(int i=0; i<s2.size(); i++){
            for(int j=pos; j<s1.size(); j++){
                if( (s2[i]==s1[j]) && map[j]==0){
                    pos=j+1;
                    map2[i]=1;
                    map[j]=1;
                    break;
                }
            }
        }
        int flag=0;
        for(int i=0; i<s2.size(); i++){
            if(map2[i]==0){
                flag=1;
                break;
            }
        }
        if(!flag) cout<<yes;
        else cout<<no;
        cout<<s1<<space<< "s2 is "<<s2<<endl;
    }
    return 0;
}
