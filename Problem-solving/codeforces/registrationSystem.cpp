#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j, test, n,a;
    string s;
    map <string, int> mp;
    scanf("%d", &test);
    for(i=0; i<test; i++){
        cin>> s;
        mp[s]++;
        if(mp[s]>1) cout<<s<<mp[s]-1<<"\n";
        else printf("OK\n");
    }
    return 0;
}
