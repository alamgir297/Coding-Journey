#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define space " "
#define newline cout<<"\n";
#define pb push_back
#define start begin()
#define finish end()
#define max_size 2000000
#define yes "YES\n"
#define no "NO\n"
#define fastIO() ({\
        ios_base::sync_with_stdio(false);\
        cin.tie(NULL);\
        })
using namespace std;

int main()
{
    fastIO();
    int n,m,k;
    cin>>n>>m>>k;
    map<int,int>mp;
    int ar[n+5];
    int v[n];
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
    for(int i=0; i<m; i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    int cnt=0;
    sort(ar,ar+n);
    sort(v,v+m);
//    for(int i=0; i<n; i++) cout<<ar[i]<<space;
//    newline;
//    for(int i=0; i<m; i++) cout<<v[i]<<space;
//    newline;
    int loInRange=0,tMid=0;;
    for(int i=0; i<n; i++){
        int beg=0, end=m-1,mid;
        int target=ar[i];
        while(beg<=end){
            mid=(beg+end)/2;
            if( (v[mid]<=(target+k) && v[mid]>=(target-k)) && mp[v[mid]]>0){
                while(v[mid]>=(target-k)){
                    if(mp[v[mid]]>0)
                        loInRange=v[mid];
                    mid--;
                }
                cnt++;
//                cout<<"ar "<<ar[i]<<space<<loInRange<<endl;
                mp[loInRange]--;
                break;
            }
            if(target<(v[mid]-k)) end=mid-1;
            else beg=mid+1;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
