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
void insertion_sort(int ar[], int n){
    for(int i=1; i<n; i++){
        int key=ar[i], j=i-1;
        while(j>=0 && ar[j]>key){
            ar[j+1]=ar[j];
            j=j-1;
        }
        ar[j+1]=key;
    }
    for(int i=0; i<n; i++) cout<<ar[i]<<space;
    newline;
}
int main()
{
    //fastIO();
    int n;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
    insertion_sort(ar, n);
    return 0;
}
