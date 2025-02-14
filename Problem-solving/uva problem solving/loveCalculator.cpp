#include <bits/stdc++.h>
#define MX 27
using namespace std;
int sumCh(string s1){
    int ar[MX]={0};
    for(size_t i=0; i<s1.size(); i++){
        if(isalpha(s1[i])){
            char ch=tolower(s1[i]);
            ar[ch-'a'+1]++;
        }
    }
    int sum=0;
    for(int i=0; i<MX; i++){
        if(ar[i]>0){
            sum+=i*ar[i];
        }
    }
    return sum;
}
int sumDigit(int n){
    int sum=0, i;
    while(n!=0){
        sum+=n%10;
        n/=10;
    }
    if(sum<10)
        return sum;
    else{
        int sum2=0;
        while(sum!=0){
            sum2+=sum%10;
            sum/=10;
        }
        return sum2;
    }
}
int main()
{
    string s1,s2;
    char c='%';
    int sum1,sum2,sumD1,sumD2;
    while(getline(cin,s1)){
        getline(cin,s2);
        sum1=sumCh(s1), sum2=sumCh(s2);
        sumD1=sumDigit(sum1), sumD2=sumDigit(sum2);
        if(sumD1>sumD2) swap(sumD1, sumD2);
        printf("%.2f %c\n", (float)sumD1*100/(float)sumD2, c);
    }
    return 0;
}
