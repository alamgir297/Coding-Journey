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
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int ar[n],flag=1, cnt=0;
        for(int i=0; i<n;i++)cin>>ar[i];
        for(int i=0; i<n; i++){
            if(!flag) break;
            if(i%2==0 && ar[i]%2!=0){
                for(int j=i+1; j<n; j++){
                    if(ar[j]%2==0 && j%2!=0){
                        swap(ar[i],ar[j]);
                        cnt++;
//                        cout<< "here\n";
                        break;
                    }
                    else if(j==n-1){
                        flag=0;
                        break;
                    }
                }
            }
            if(i%2!=0 && ar[i]%2==0){
                for(int j=i+1; j<n; j++){
                    if(ar[j]%2!=0 && j%2==0){
                        swap(ar[i],ar[j]);
                        cnt++;
//                        cout<< "here 2\n";
                        break;
                    }
                    else if(j==n-1){
                        flag=0;
                        break;
                    }
                }
            }
        }
        for(int i=0; i<n; i++){
            if(i%2==0 && ar[i]%2!=0){
                flag=0;break;
            }
            else if(i%2!=0 && ar[i]%2==0){
                flag=0; break;
            }
        }
        if(flag) cout<<cnt<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
