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
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        map<char,int>keys,locks;
        for(int i=0;i<s.size(); i++){
            if(s[i]>='a' && s[i]<='z') keys[s[i]]=i;
            else locks[s[i]]=i;
        }
        if(keys['r']<locks['R'] && keys['g']<locks['G'] && keys['b']<locks['B']) cout<<yes;
        else cout<<no;
    }
    return 0;
}
