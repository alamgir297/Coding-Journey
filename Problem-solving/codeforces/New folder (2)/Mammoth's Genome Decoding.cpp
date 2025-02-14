#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define space " "
#define newline printf("\n")

using namespace std;
int A=0,C=0,G=0,T=0;
void cntGenome(string s){
    A=0,C=0,G=0,T=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='A') A++;
        else if(s[i]=='C') C++;
        else if(s[i]=='G') G++;
        else if(s[i]=='T') T++;
    }
}
void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();
    int n;
    string s,impossible="===";
    while(cin>>n){
        int flag=0,limit;
        cin>>s;
        if(n%4!=0) flag=0;
        else{
            limit=n/4;
            cntGenome(s);
            if(A==limit&& C==limit&& G==limit&&T==limit) flag=1;
            else{
                for(int i=0; i<s.size(); i++){
                    if(s[i]=='?'){
                        if(A<limit){
                            s[i]='A';
                            A++;
                        }
                        else if(C<limit){
                            s[i]='C';
                            C++;
                        }
                        else if(G<limit){
                            s[i]='G';
                            G++;
                        }
                        else if(T<limit){
                            s[i]='T';
                            T++;
                        }
                    }
                }
                cntGenome(s);
//                cout<<A<<space<<C<<space<<G<<space<<T<<endl;
                if(A==limit&& C==limit&& G==limit&&T==limit) flag=1;
//                else flag=0;
            }
        }
        if(flag) cout<<s<<endl;
        else cout<<impossible<<endl;
    }
    return 0;
}
