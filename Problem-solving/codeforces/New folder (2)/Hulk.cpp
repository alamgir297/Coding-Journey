#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define space " "
#define newline printf("\n")

using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int isEven(int x){
    if(x%2==0) return 1;
    else return 0;
}
int main()
{
    fastIO();
    int n;
    string phrase1="I hate that ", phrase2="I love that ", even="I love it",odd="I hate it";
    while(cin>>n){
        string str="";
        for(int i=1; i<=n; i++){
            if(!isEven(i) && i!=n) str+=phrase1;
            if(isEven(i) && i!=n) str+=phrase2;
            if(isEven(i) && i==n) str+=even;
            if(!isEven(i) && i==n) str+=odd;
        }
        cout<<str<<endl;
    }
    return 0;
}
