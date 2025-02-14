#include <bits/stdc++.h>

using namespace std;

void max_heap(int ar[], int i, int sz){
    int left,right,largest;
    left=2*i;
    right=2*i+1;
    if(left<=sz && ar[left]>ar[i]) largest=left;
    else
        largest=i;
    if(right<=sz && ar[right]>ar[largest]) largest=right;
    if(largest!=i){
        swap(ar[i],ar[largest]);
        max_heap(ar, largest, sz);
    }
}

void heap_sort(int ar[], int n){
    for(int i=n/2; i>=1; i--){
        max_heap(ar, i, n);
    }

}
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=1; i<=n; i++) cin>>ar[i];
    heap_sort(ar, n);
    for(int i=1; i<=n; i++) cout<<ar[i]<< " ";
    cout<<endl;
    return 0;
}

