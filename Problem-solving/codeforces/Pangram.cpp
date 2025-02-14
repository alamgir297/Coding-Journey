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
#define yes "YES\n"
#define no "NO\n"

using namespace std;

int main()
{
    //fastIO();
    int n;
    while(cin>>n){
        string s;
        int ar[26]={0},flag=1;
        cin>>s;
        if(n>=26){
            for(int i=0; i<s.size(); i++){
                char ch=towlower(s[i]);
                int t=ch-'a';
                ar[t]++;
            }
            for(int i=0; i<26; i++){
                if(ar[i]==0){
                    flag=0;
                    break;
                }
            }
        }
        else flag=0;
        if(flag) cout<<yes;
        else cout<<no;


    }
    return 0;
}
