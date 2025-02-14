#include <bits/stdc++.h>

using namespace std;
int ar[1000000];
vector<int>v;

void seive(){
    int i,j,n=1000000;
    v.push_back(2);
    for(i=3; i<n; i+=2){
        if(ar[i]==0){
            v.push_back(i);
            if(i>n/i) continue;
            for(j=i*i; j<=n; j+=(i+i)) ar[j]=1;
        }
    }
}
int strToNum(string s){
    int ar[53]={0}, val,val2,sum=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='a' && s[i]<='z'){
            val=s[i]-'a'+1;
        }
        else if(s[i]>='A' && s[i]<='Z'){
            val=s[i]-'A'+27;
//            sum+=val2;
//            ar[val2]++;
        }
        sum+=val;
    }
//    for(int i=1; i<=52; i++){
//        if(ar[i]>0){
//            sum+=i*ar[i];
//        }
//    }
    return sum;
}

int main()
{
    seive();
    string word;
    int num;
    while(cin>>word){
        num=strToNum(word);
        if(binary_search(v.begin(), v.end(), num) || num==1)
            printf("It is a prime word.\n");
        else printf("It is not a prime word.\n");
    }
    return 0;
}
