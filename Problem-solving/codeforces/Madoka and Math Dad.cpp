#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define space " "
#define newline cout<<"\n";
#define pb push_back
#define start begin()
#define finish end()
#define max_size 2000000
#define yes "YES\n"
#define no "NO\n"
#define fastIO() ({\
        ios_base::sync_with_stdio(false);\
        cin.tie(NULL);\
        })
using namespace std;

int main()
{
    fastIO();
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        bool flag1=false,flag2=false;
        int one=0,two=0;
        string ans="";
        while(1){
            if(n==1 || n==0) break;
            if(flag2==false && n-2>=0){
                n-=2;
                two++;
                flag1=false;
                flag2=true;
            }
            else if(flag1==false && n-1>=0){
                n-=1;
                flag2=false;
                flag1=true;
                one++;
            }
        }
        if(n==1) one++;
        if(two>=one){
            for(int i=0; i<one+two; i++){
                if(i%2==0) ans+='2';
                else ans+='1';
            }
        }
        else{
            for(int i=0; i<one+two; i++){
                if(i%2==0) ans+='1';
                else ans+='2';
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
