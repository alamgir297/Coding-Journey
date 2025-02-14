#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

int main()
{
    int t,x,cnt,totCnt=0,tmp;
    cin>>t>>x;
    tmp=x;
    t--,totCnt++;
    while(t--){
        cin>>x;
        if(tmp==x){
            tmp=x;
        }
        else{
            totCnt++;
            tmp=x;
        }

    }
    cout<<totCnt<<endl;
    return 0;
}
