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
//    fastIO();
    string s;
    while(cin>>s){
        int jump=1, maxJump=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' && s[i]!='U' && s[i]!='Y'){
                jump++;
            }
            else{
                if(jump>maxJump) maxJump=jump;
                jump=1;
            }
        }
        if(jump>maxJump) maxJump=jump;
        cout<<maxJump<<endl;
    }
    return 0;
}
