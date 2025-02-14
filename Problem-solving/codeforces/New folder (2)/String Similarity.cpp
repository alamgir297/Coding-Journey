#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define space " "
#define newline cout<<"\n";
#define pb push_back
#define start begin()
#define finish end()
#define max_size 1000000

using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();
    int t,n;
    cin>>t;
    while(t--){
        string s,str="";
        cin>>n;
        cin>>s;
        for(int i=0; i<s.size(); i+=2){
            str+=s[i];
        }
        cout<<str<<endl;
    }
    return 0;
}
