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
    int t,n,k;
    string s;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int a=0,b=0,c=0;
        s="";
        for(int i=0; i<n; i++){
            if(a<k){
                s+="a";
                a++;
            }
            else if(b<k){
                s+="b";
                b++;
            }
            else if(c<k){
                s+="c";
                c++;
            }
            if(a==k && b==k && c==k) a=0,b=0,c=0;
        }
        cout<<s<<endl;
    }
    return 0;
}
