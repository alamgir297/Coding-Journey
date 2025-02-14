#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    string s;
    scanf("%d", &t);
    while(t--){
        int remain1,remain2,flag=0;
        int ar[4]={0};
        cin>>s;
        for(int i=0; i<s.size(); i++){
            ar[s[i]-'A'+1]++;
        }
        if(ar[2]<ar[1]) flag=0;
        else{
            remain1=ar[2]-ar[1];
            remain2=remain1-ar[3];
            if(remain2==0) flag=1;
        }
        if(flag==1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
