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
#define fastIO() ({\
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);\
})
#define yes "YES\n"
#define no "NO\n"

using namespace std;

int main()
{
    fastIO();
    int n;
    while(cin>>n){
        int ar[n], sum=0;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            sum+=x;
            ar[i]=sum;
        }
        int cnt=0;
        for(int i=0; i<n-1; i++){
            if(ar[n-1]-ar[i]==ar[i]){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
