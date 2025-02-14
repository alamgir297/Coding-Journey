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
    int n;
    while(cin>>n){
        string s;
        cin>>s;
        int ar[n+1];
        int cnt=0,cnt0=0,mxlen=0;
        for(int i=0; i<s.size(); i++){
            cnt+=s[i]-'0';
            ar[i]=cnt;
        }
        for(int i=0; i<s.size(); i++) cout<<ar[i]<<space;
        newline;
    }
    return 0;
}
