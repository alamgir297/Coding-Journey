#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define space " "
#define newline printf("\n")
#define pb push_back
#define start begin()
#define finish end()
#define max_size 1010

using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();
    int n,x;
    while(cin>>n){
        int maxLen=0,cnt=0;
        vi v(max_size);
        for(int i=0; i<n; i++){
            cin>>x;
            v[x]++;
        }
        for(int i=0; i<max_size; i++){
            if(v[i]>0){
                cnt++;
                if(v[i]>maxLen) maxLen=v[i];
            }
        }
        cout<<maxLen<<space<<cnt<<endl;
    }
    return 0;
}
