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
//    fastIO();
    int t,n,a,b,c,d,e,x,flag,digits;
    cin>>t;
    while(t--){
        flag=0;
        vi v;
        cin>>n;
        digits=log10(n)+1;
        if(digits>1){
            a=n%10; flag=1;
            if(a>0)
            v.push_back(a);
            for(int i=1; i<=digits; i++){
                x=n%(int)pow(10,i);
                if(x-a>0)
                v.push_back(x-a);
//                cout<<a<<space<<x-a<<endl;
                a=x;
            }
        }
        else cout<< "1\n"<<n<<endl;
        if(flag){
            cout<<v.size()<<endl;
            for(int i=0; i<v.size(); i++){
//            if(v[i]>0)
                cout<<v[i]<<space;
            }
            newline;
        }
    }
    return 0;
}
