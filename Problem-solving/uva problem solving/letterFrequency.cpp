#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,a;
    scanf("%d", &n);
    getchar();
    string s;
    std::string::iterator it;
    while(n--){
        int ar[27]={0};
        getline(cin, s);
        for(it=s.begin(); it<s.end(); it++){
            if(isalpha(*it)){
                *it=tolower(*it);
            }
            a=*it-'a';
            for(j=0; j<27; j++){
                if(j==a ){
                    ar[a]++;
                }
            }
        }
        int Max=0;
        for(i=0; i<26; i++){
            if(ar[i]>Max) Max=ar[i];
        }
            for(i=0; i<26; i++){
                if(ar[i]==Max)
                printf("%c", i+'a');
            }
        cout<<"\n";
    }
    return 0;
}
