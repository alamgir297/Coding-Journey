#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>

using namespace std;

int main()
{
    int n;
    while(cin>>n){
        int flag=0;
        int x;
        for(int i=0; i<n; i++){
            cin>>x;
            if(x==1){
                flag=1;
            }
        }
        if(flag==0) printf("EASY\n");
        else printf("HARD\n");
    }
    return 0;
}
