#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define space " "
#define newline printf("\n")
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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
 //    fastIO();
    int n,m,x;
    while(cin>>n>>m){
        string s, str="";
        int girl=0, boy=0, xtra;
        if(n>m){
            xtra=n-m;
            boy=1;
        }
        else{
            xtra=m-n;
            girl=1;
        }
        for(int i=0; i<xtra; i++){
            if(boy) str+='B';
            else if(girl) str+='G';
        }
        for(int i=0; i<min(n,m); i++){
            if(boy){
                str+="GB";
            }
            else if(girl) str+="BG";
        }
        cout<<str<<endl;
    }
    return 0;
}
