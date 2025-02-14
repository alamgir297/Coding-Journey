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
    int n;
    string s;
    while(cin>>n){
        if(n>=0) cout<<n<<endl;
        else{
            s=to_string(n);
            int len=s.size()-1;
            if(s[len]>s[len-1]){
                s.erase(s.begin()+len);
                cout<<stoi(s)<<endl;
            }
            else{
                s.erase(s.begin()+len-1);
                cout<<stoi(s)<<endl;
            }
        }
    }
    return 0;
}
