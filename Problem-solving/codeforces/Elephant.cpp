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

using namespace std;

int main()
{
    fastIO();
    int m,n,k=2;
    while(cin>>m>>n){
        cout<<(m*n)/k<<endl;
    }
    return 0;
}
