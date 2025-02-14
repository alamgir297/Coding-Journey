#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

int main()
{
    int n=4,x;
    set<int>st;
    for(int i=0; i<n; i++){
        cin>>x;
        st.insert(x);
    }
    int sz=st.size();
    printf("%d\n", 4-sz);
    return 0;
}
