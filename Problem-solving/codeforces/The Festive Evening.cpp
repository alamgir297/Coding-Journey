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

#define fastIO() ({\
        ios_base::sync_with_stdio(false);\
        cin.tie(NULL);\
        })

using namespace std;

int main()
{
    //fastIO();
    int n,k;
    while(cin>>n>>k){
        vector<char>gates;
        bool marked[27]={false};
        int flag=0,cnt=0,ans=0;
        string s;
        cin>>s;
        for(int i=1; i<s.size()-1; i++){
            int tmp=s[i-1]-'A';
            if(flag) break;
            if(s[i]!=s[i-1]){
                if(!marked[tmp]){
                    cnt++;
                    gates.pb(tmp+'A');
                    marked[tmp]=true;
                }
            }
        }
        int x=s[s.size()-1]-'A',len=s.size()-1;

        if(!marked[x]){
            if(s[len]!=s[len-1])
                cnt++;
            gates.pb(x+'A');
        }
//        for(int i=0; i<gates.size(); i++)cout<<gates[i]<<space;
//        newline;
        if(cnt<=k) ans=1;
        if(ans==0) cout<<yes;
        else cout<<no;
    }
    return 0;
}
