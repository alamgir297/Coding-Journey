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
    int ar[10]={0},cnt=0,x,temp,flag=0;
    string ans;
    for(int i=0; i<6; i++){
        cin>>x;
        ar[x]++;
    }
    for(int i=1; i<10; i++){
        if(ar[i]==6){
            ans="Elephant";
            break;
        }
        if(ar[i]==5){
            ans="Bear";
            break;
        }
        for(int j=1; j<10 && !flag; j++){
            if(ar[j]==4){
                temp=j;
                flag=1;
                break;
            }
        }
        if(flag){
            if(ar[i]==2 || ar[i]==6){
                ans="Elephant";
                break;
            }
            else{
                ans="Bear";
            }
        }
        else ans="Alien";
    }
    cout<<ans<<endl;
    return 0;
}
