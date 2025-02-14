#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

int main()
{
    string s,t;
    while(cin>>s>>t){
        reverse(s.begin(), s.end());
        if(s==t) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
