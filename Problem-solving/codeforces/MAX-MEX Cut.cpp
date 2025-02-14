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
    //fastIO();
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int ar[n],sum=0,flag=0,flag2=0;
        string s1,s2;
        cin>>s1>>s2;
        for(int i=0; i<s1.size();i++){
            if(s1[i]!=s2[i]){
                ar[i]=2;
                flag=0;
                flag2=0;
            }
            else if(s1[i]==s2[i] &&s1[i]=='1'){
                if(!flag2){
                    ar[i]=0;
                    flag=1;
                }
                else{
                    ar[i]=1;
                    flag2=0;
                }
            }
            else if(s1[i]==s2[i] &&s1[i]=='0'){
                if(flag){
                    ar[i]=2;
                    flag=0;
                }
                else{
                    ar[i]=1;
                    flag2=1;
                }
            }

        }
        for(int i=0; i<n; i++) sum+=ar[i];
//        for(int i=0; i<n; i++) cout<<ar[i]<<space;
//        newline;
        cout<<sum<<endl;
    }
    return 0;
}
