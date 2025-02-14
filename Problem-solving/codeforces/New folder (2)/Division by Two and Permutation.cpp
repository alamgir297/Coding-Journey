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
    int t,n,x;
    cin>>t;
    while(t--){
        cin>>n;
        set<int>st;
        int ar[n],flag=0;
        for(int i=1; i<=n; i++) cin>>ar[i];
        sort(ar+1,ar+n+1);
        for(int i=1; i<=n; i++){
            if(binary_search(ar+1,ar+n+1,i)){
                st.insert(i);
                continue;
            }
            else{
                flag=0;
                for(int j=i;j<=n; j++){
                    if(flag) break;
                    x=ar[j];
                    while(x!=0){
                        x/=2;
                        if(!binary_search(st.begin(),st.end(),x) && x==i){
                            cout<<x<<endl;
                            st.insert(x);
                            flag=1;
                            break;
                        }
                    }
                }
            }
        }
        if(st.size()==n) cout<< "YES\n";
        else cout<< "NO\n";
        set<int>::iterator it;
        for(it= st.begin(); it!=st.end(); it++) cout<<*it;
        cout<<endl;
        st.clear();
    }
    return 0;
}
