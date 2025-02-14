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
        int n,k,flag=0,cnt=0,found=0,sp=0;
        string s,str="",strng;
        cin>>n>>s>>k;
        map<char, int> special;
        for(int i=0; i<k; i++){
            char ch;
            cin>>ch;
            special[ch]=1;
        }
        for(int i=s.size()-1; i>=0; i--){
            if(special[s[i]]==1){
                str=s[i]+str;
                break;
            }
            str=s[i]+str;
        }
        while(s!=str){
            for(int i=0; i<s.size(); i++){
                if(special[s[i]]==1){
                    found=1;
                    if(i-1>=0){
                        s.erase(s.begin()+i-1);
                        i--;
                    }
                }
            }
            if(found) cnt++;
            else flag=1;
        }
        if(!found) cout<<0<<endl;
        else cout<<cnt<<endl;
    }
    return 0;
}
