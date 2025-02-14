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
    int n;
    while(cin>>n){
        int ar[n],posI=0,posJ=0,flag=0;
        for(int i=0; i<n; i++)cin>>ar[i];
        if(is_sorted(ar,ar+n)) cout<<"yes\n"<<"1 1\n";
        else{
            if(n>2){
                for(int i=1; i<n; i++){
                    if(flag) break;
                    if(ar[i]<ar[i-1]){
                        posI=i;
                        for(int j=i; j<n; j++){
                            if(ar[j]>ar[j-1]){
                                posJ=j;
                                flag=1; break;
                            }
                            else if(j==n-1){
                                posJ=n;
                                flag=1;
                                break;
                            }

                        }
                    }
                }
                reverse(ar+posI-1, ar+posJ);
                if(is_sorted(ar, ar+n)) cout<< "yes\n"<<posI<<space<<posJ<<endl;
                else cout<< "no\n";
            }
            else cout<< "yes\n"<< "1 2\n";
        }
    }
    return 0;
}
