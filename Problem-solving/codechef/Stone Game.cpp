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
    //fastIO();
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string a,b, str="";
        cin>>a>>b;
        sort(a.start, a.finish);
        sort(b.start, b.finish, greater<char>());
        int x=0;
        for(int i=0; i<2*n; i++) str+='0';
        for(int i=0; i<2*n; i+=2){
                str[i]=a[i-x];
                x++;
        }
        x=1;
        for(int i=1; i<2*n; i+=2){
                str[i]=b[i-x];
                x++;
        }
        cout<<str<<endl;
    }
    return 0;
}
