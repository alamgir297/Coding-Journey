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
    int n;
    while(cin>>n){
        int cnt=0,ans;
        double ar[n];
        double x,sum=0,avrg;
        for(int i=0; i<n; i++){
            cin>>x;
            sum+=x;
            ar[i]=x;
        }
        avrg=sum/(double)n;
        if(avrg>=4.5) ans=0;
        else{
            sort(ar,ar+n);
            for(int i=0; i<n; i++){
                if(ar[i]<5){
                    sum=sum-ar[i]+5;
                    avrg=sum/n;
                    cnt++;
                }
                if(avrg>=4.5){
                    ans=cnt;
                    break;
                }

            }
        }
        cout<<ans<<endl;

    }
    return 0;
}
