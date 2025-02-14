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
//    fastIO();
    int a,b;
    while(cin>>a>>b){
//        if((a&1)!=1) cout<< "even\n";
//        else cout<< "odd\n";
        int flag=0;
        char snake[a+10][b+10];
        for(int i=1; i<=a; i++){
            for(int j=1; j<=b; j++){
                snake[i][j]='.';
            }
        }
        for(int i=1; i<=a; i++){
            for(int j=1; j<=b; j++){
                if((i&1)==1) snake[i][j]='#';
            }
        }
        for(int i=2; i<=a; i+=4)snake[i][b]='#';
        for(int i=4; i<=a; i+=4)snake[i][1]='#';
        for(int i=1; i<=a; i++){
            for(int j=1; j<=b; j++){
                cout<<snake[i][j];
            }
            newline;
        }
    }
    return 0;
}
