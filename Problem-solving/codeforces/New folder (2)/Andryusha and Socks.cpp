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
    int n,x,mx=0,table=0;
    cin>>n;
    set<int>sett;
    for(int i=0; i<n*2; i++){
        cin>>x;
        if(!sett.count(x)){
            table++;
            sett.insert(x);
            if(table>mx) mx=table;
        }
        else{
            table--;
        }
    }
    cout<<mx<<endl;
    sett.clear();
    return 0;
}
