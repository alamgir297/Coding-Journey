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
    int n,a,p,q;
    cin>>n;
    cin>>p;
    vi va(p),vb(p);
    set<int>st;
    for(int i=0; i<p; i++){
        cin>>a;
        st.insert(a);
    }
    cin>>q;
    for(int i=0; i<q; i++){
        cin>>a;
        st.insert(a);
    }
    if(st.size()==n) cout<< "I become the guy.\n";
    else cout<< "Oh, my keyboard!\n";
    return 0;
}
