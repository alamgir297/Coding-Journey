#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

int main()
{
    int n, cntA,cntD; string s;
    while(cin>>n){
        cntA=0, cntD=0;
        cin>>s;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='A') cntA++;
            if(s[i]=='D') cntD++;
        }
        if(cntA>cntD) printf("Anton\n");
        else if(cntA<cntD) printf("Danik\n");
        else printf("Friendship\n");
    }
    return 0;
}
