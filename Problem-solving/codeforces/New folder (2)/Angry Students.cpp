#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define space " "
#define newline printf("\n")
#define PB push_back
#define max_size 1000000

using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();
    int t,k;
    cin>>t;
    while(t--){
        string s;
        cin>>k;
        cin>>s;
        int cnt=0,flag=0, maxP=0;
        for(int i=0; i<k; i++){
            if(flag) break;
            if(s[i]=='A'){
                for(int j=i+1; j<k; j++){
                    if(s[j]=='P') cnt++;
                    else if(s[j]=='A') cnt=0;
                    if(cnt>maxP) maxP=cnt;
                    if(j==k-1){
                        flag=1;
                    }
                }
            }
        }
        cout<<maxP<<endl;
    }
    return 0;
}
