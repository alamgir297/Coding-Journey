#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

int main()
{
    int t,cnt=0;cin>>t;
    string postPlus="X++", prePlus="++X", postMinus="X--", preMinus="--X",operation;
    while(t--){
        cin>>operation;
        if(operation==postPlus || operation==prePlus) cnt++;
        else if(operation==postMinus|| operation==preMinus) cnt--;
    }
    printf("%d\n", cnt);
    return 0;
}
