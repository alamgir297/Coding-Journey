#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

int main()
{
    string s;
    while(cin>>s){
        int flag=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='4' || s[i]=='7') flag++;
        }
        if(flag==4 || flag==7) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
