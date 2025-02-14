#include<bits/stdc++.h>

using namespace std;
void heapify(int ar[], int node, int n){
    int left=2*node, right=2*node+1, largest=node;
    if(left<=n && ar[left]>ar[largest]) largest=left;
    if(right<=n && ar[right]>ar[largest]) largest=right;
    if(largest!=node){
        swap(ar[node], ar[largest]);
        heapify(ar, largest, n);
    }
}
void heap_sort(int ar[], int n){
    for(int i=n/2; i>=1; i--) heapify(ar, i, n);
    int sz=n;s
    for(int i=n; i>=2; i--){
        swap(ar[1], ar[i]);
        heapify(ar, 1, i);
    }
}
void printArray(int ar[], int n){
    for(int i=1; i<=n; i++) cout<<ar[i]<< " ";
    cout<<endl;
}
int main()
{
    int n,a,x;
    cin>>n;
    int ar[n];
    for(int i=1; i<=n; i++) cin>>ar[i];
    heap_sort(ar, n);
    printArray(ar,n);
    return 0;
}
