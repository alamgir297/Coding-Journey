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
    int n,h,m;
    while(cin>>n){
        cin>>h>>m;
        n--;
        int tmpH=h, tmpM=m, cnt=1,mx=1;
        for(int i=0; i<n; i++){
            cin>>h>>m;
            if(h==tmpH && m==tmpM){
                cnt++;
                tmpH=h, tmpM=m;
            }
            else{
//                cout<<cnt<<endl;
                if(cnt>mx) mx=cnt;
                tmpH=h,tmpM=m;
                cnt=1;
            }
        }
        if(cnt>mx) mx=cnt;
        cout<<mx<<endl;
    }
    return 0;
}
