#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if((x+y)%2==1) cout<< "-1 -1\n";
        else{
            if(x%2==1){
                x++;
                y--;
            }
            else if(y%2==1){
                y++;
                x--;
            }
            printf("%d %d\n", x/2,y/2);
        }
    }
    return 0;
}
