#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define space " "
#define newline printf("\n")
#define max_size 1000000

using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();
    int t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        sort(s.begin(), s.end());
        cout<<s<<endl;
    }
    return 0;
}
