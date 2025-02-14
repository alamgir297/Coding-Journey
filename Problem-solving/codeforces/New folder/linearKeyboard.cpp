#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    string keyboard, word;
    scanf("%d", &t);
    while(t--){
        int totTime=0;
        map<char,int>mp;
        int ar[27]={0};
        cin>>keyboard>>word;
        for(int i=0; i<keyboard.size(); i++){
            mp[keyboard[i]]=i+1;
        }
        for(int i=0; i<word.size()-1; i++){
            int Time=0;
            Time=(mp[word[i]]-mp[word[i+1]]);
            if(Time<0) Time*=(-1);
            totTime+=Time;
        }
        printf("%d\n", totTime);
    }
    return 0;
}
