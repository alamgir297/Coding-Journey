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
    int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        int cnt=0;
        while(a!=b){
                cout<<a<<space<<b<<endl;
            if((a|b)==b){
                cnt++;
                a=a|b;
            }
            else if(a+1==b){
                cnt++;
                a++;
            }
            else if(a==b+1){
                cnt++;
                b++;
            }
            else if((a+1|b)>=(a|b+1)){
                cnt++;
                a++;
            }
            else {
                cnt++;
                b++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
