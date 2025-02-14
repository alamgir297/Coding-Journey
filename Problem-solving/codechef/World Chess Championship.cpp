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
    int t;
    cin>>t;
    while(t--){
        int c=0,n=0,d=0,x;
        cin>>x;
        string s;
        cin>>s;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='C') c++;
            else if(s[i]=='N') n++;
            else d++;
        }
        int Cpoint,Npoint,ans;
        Cpoint=c*2+d*1;
        Npoint=n*2+d*1;
        if(Cpoint>Npoint) ans=60*x;
        else if(Cpoint<Npoint) ans=40*x;
        else ans=55*x;
        cout<<ans<<endl;
    }
    return 0;
}
