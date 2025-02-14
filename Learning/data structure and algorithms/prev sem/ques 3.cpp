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
    //fastIO();
    string s;
    while(cin>>s){
        stack<char> stk;
        for(int i=0; i<s.size(); i++){
            if(isdigit(s[i])) stk.push(s[i]);
        }
        cout<<stk.size()<<endl;
    }
    return 0;
}
