#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define space " "
#define newline cout<<"\n";
#define pb push_back
#define start begin()
#define finish end()
#define max_size 1000000
#define yes "YES\n"
#define no "NO\n"
#define fastIO() ({\
        ios_base::sync_with_stdio(false);\
        cin.tie(NULL);\
        })
using namespace std;
vi primes;
bool status[max_size];
void seive(){
    int n=max_size;
    primes.pb(2);
    for(int i=3; i<n; i+=2){
        if(status[i]==false){
            primes.pb(i);
            if(i>n/i) continue;
            for(int j=i*i; j<=n; j+=(2*i)) status[j]=true;
        }
    }
}
int main()
{
    //fastIO();
    seive();
    while(1){
        int n;
        cin>>n;
        if(!binary_search(primes.begin(),primes.end(), n)){
            cout<<n<<endl;
        }
        else{
            string ans= "",tmp;
            int digits=log10(n)+1;
            ans=to_string(n);
            if((5-digits)%2==0){
                for(int i=0; i<(5-digits)/2; i++){
                    ans='0'+ans;
                }
                for(int i=ans.size(); i<5; i++){
                    ans+='0';
                }
                cout<<ans<<endl;
            }
            else{
                for(int i=0; i<=ceil((5-digits)/2); i++) ans='0'+ans;
                for(int i=ans.size(); i<5; i++) ans+='0';
                cout<<ans<<endl;
            }
        }
    }
    return 0;
}
