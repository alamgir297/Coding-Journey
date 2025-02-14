#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define space " "
#define newline cout<<"\n";
#define pb push_back
#define all(v) v.begin(),v.end()
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
    int n,x;
    cin>>n>>x;
    int v[n], ar[n];
    map<int,int>mp;
    for(int i=0; i<n; i++){
        cin>>v[i];
        mp[v[i]]=i+1;
        ar[i]=v[i];
    }
    sort(v,v+n);
    int pos1=0,pos2=0,flag=0,val1,val2;
    for(int i=0; i<n; i++){
        if(flag) break;
        int target=(x-v[i]), beg=0,end=n-1,mid;
        pos1=mp[v[i]];
        val1=v[i];
        while(beg<=end){
            mid=(beg+end)/2;
            if(v[mid]==target && mid!=i){
                pos2=mp[v[mid]];
                val2=v[mid];
                flag=1;
                break;
            }
            if(v[mid]>target) end=mid-1;
            else beg=mid+1;
        }
    }
    int flag1=0,flag2=0;
    if(flag){
        if(pos1==pos2){
            for(int i=0; i<n; i++){
                if(flag1&&flag2) break;
                if(ar[i]==val1){
                    pos1=i+1;
                    flag1=1;
                    for(int j=i+1; j<n; j++){
                        if(ar[j]==val2){
                            pos2=j+1;
                            flag2=1;
                            break;
                        }
                    }
                }
            }
            cout<< pos1<<space<<pos2<<endl;

        }
        else
            cout<< pos1<<space<<pos2<<endl;
    }
    else cout<< "IMPOSSIBLE\n";
    return 0;
}
//8 6 3 2 12 4
