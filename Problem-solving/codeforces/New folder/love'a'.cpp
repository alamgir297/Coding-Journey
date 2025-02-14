#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    while(cin>>s){
        int len=s.size(), numOfA=0;
        for(int i=0; i<len; i++){
            if(s[i]=='a') numOfA++;
        }

        while(1){
            int m=(len/2) +1;
            if(numOfA>=m) break;
            len--;
        }
        printf("%d\n", len);
    }
    return 0;
}
