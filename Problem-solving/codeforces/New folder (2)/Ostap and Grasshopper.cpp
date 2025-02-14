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

int main()
{
    fastIO();
    int n,k,flag,cnt,a,posT,ans;
    string s,str;
    while(cin>>n>>k){
        cin>>s;
        posT=1000,flag=0,ans=0;
        for(int i=0; i<s.size(); i++){
            if(flag) break;
                cout<<flag<<endl;
            if(s[i]=='T') posT=i;
            if(s[i]=='G'){
                if(i>posT){
                    for(int j=i-k; j>=0; j-=k){
                        cout<<j<<endl;
                        if(s[j]=='T'){
                            flag=1;
                            ans=1;
                            break;
                        }

                    }
                }
                else if(i<posT){
                    cout<<posT<<endl;
                    for(int j=i; j<s.size(); j+=k){
                        if(s[j]=='#'){
                            cout<< "NO\n";
                            flag=1;
                            ans=0;
                            break;
                        }
                        else if(s[j]=='T'){
                            cout<< "YES\n";
                            ans=1;
                            flag=1;
                            break;
                        }

                    }
                }
            }
        }
    }
    return 0;
}
