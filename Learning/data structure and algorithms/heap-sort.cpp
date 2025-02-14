#include <bits/stdc++.h>
using namespace std;

void max_heap(int ar[], int i, int n){
    int left,right,largest;
    left=2*i;
    right=2*i+1;
    largest=i;
    if(left<=n && ar[left]>ar[largest]) largest=left;
    if(right<=n && ar[right]>ar[largest]) largest=right;
    if(largest!=i){
        swap(ar[i], ar[largest]);
        max_heap(ar, largest, n);
    }

}
void heap_sort(int ar[], int n){
    for(int i=n/2; i>=1; i--) max_heap(ar, i, n);
    for(int i=n; i>1; i--){
        swap(ar[1], ar[i]);
        max_heap(ar, 1, i);
    }
}
printArray(int ar[], int n){
    for(int i=1; i<=n; i++) cout<<ar[i]<< " ";
    cout<< "\n";
}
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=1;i<=n; i++) cin>>ar[i];
    heap_sort(ar, n);
    printArray(ar, n);
}
