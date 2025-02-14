#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define space " "
#define newline printf("\n")
#define pb push_back
#define max_size 1000000

using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
//    fastIO();
    ll a,b,c;
    string A,B,C,tmp;
    while(cin>>a>>b){
        c=a+b;
        A=to_string(a),B=to_string(b),C=to_string(c);
        string s1="",s2="",s3="";
        for(int i=0; i<A.size(); i++){
            if(A[i]!='0') s1+=A[i];
        }
        for(int i=0; i<B.size(); i++){
            if(B[i]!='0') s2+=B[i];
        }
        for(int i=0; i<C.size(); i++){
            if(C[i]!='0') s3+=C[i];
        }
        a=stoi(s1), b=stoi(s2);
        c=a+b;
        tmp=to_string(c);
        if(tmp==s3) cout<< "YES\n";
        else cout<< "NO\n";

    }
    return 0;
}
