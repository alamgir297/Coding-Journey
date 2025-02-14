#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,a,cnt=0,x;
    set<int>s;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &a);
        s.insert(a);
    }
    x=s.size();
    set<int>::iterator it=s.begin();
    for(; it!=s.end(); it++){
        cnt++;
        if(cnt==2) printf("%d\n", *it);
        else
            if(x<=1) printf("NO\n");
    }
    return 0;
}
