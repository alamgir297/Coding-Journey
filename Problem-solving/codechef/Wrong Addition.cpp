#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define space " "
#define newline cout<<"\n";
#define pb push_back
#define start begin()
#define finish end()
#define max_size 1000000

using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    //fastIO();
    int t;
    cin>>t;
    while(t--){
        string a,s,ans="",tmp="";
        cin>>a>>s;
        int len1=a.size()-1, len2=s.size()-1;
        int flag=0,flag2=0,flag3=0,flg=0,tmplen1=len1;
        if(len1==len2) flag3=1;
        for(int i=0; i<len2-len1; i++) a='0'+a;
        len1=a.size()-1;
        for(int i=len1; i>=0; i--){
            if(flag) break;
            if(flag2) break;
            int x=a[i]-'0',y;
            tmp="";
            for(int j=len2;j>len2-1;){
                if(len2<0){
                    flag2=1;
                    break;
                }
                y=s[j]-'0';
                if(y>=x){
                    int tmpAns=y-x;
                    string tm=to_string(tmpAns);
                    ans=tm+ans;
                    len2--;
                    break;
                }
                else{
                    flg=1;
                    int f=s[j-1]-'0';
                    if(f!=1){
                        flag=1;
                        break;
                    }
                    for(int k=len2; k>len2-2; k--){
                        tmp=s[k]+tmp;
                    }
                    int tmpAns=stoi(tmp);
                    int tm=tmpAns-x;
                    string st=to_string(tm);
                    ans=st+ans;
                    len2-=2;
                    break;
                }
            }
        }
        const regex pattern("^0+(?!$)");
        ans=regex_replace(ans, pattern, "");
        if(flag) cout<<-1<<endl;
        else if(flag3 && flg) cout<<-1<<endl;
        else cout<<ans<<endl;


    }
    return 0;
}
