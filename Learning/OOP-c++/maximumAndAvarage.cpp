#include <bits/stdc++.h>
using namespace std;

class Array{

public:
    int MaximumOfarray(int ar[], int n){
        int maxVal=0;
        for(int i=0; i<n; i++){
            if(ar[i]>maxVal){
                maxVal=ar[i];
            }
        }
        return maxVal;
    }
    void avarageVal(int ar[], int n){
        int sum=0;
        for(int i=0; i<n; i++){
            sum+=ar[i];
        }
        if(sum%n==0) printf("Avarage = %d\n", sum/n);
        else printf("Average = %.2f\n", (float)sum/n);
    }

};

int main()
{
    Array arr;
    int ar[100], n;
    cin>>n;
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }
    cout<<arr.MaximumOfarray(ar,n)<<endl;
    arr.avarageVal(ar, n);


    return 0;
}
