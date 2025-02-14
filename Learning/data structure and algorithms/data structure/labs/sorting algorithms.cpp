#include <bits/stdc++.h>
using namespace std;
void inSort(int ar[], int n){
    int i,val,hole;
    for(i=1; i<n; i++){
        val=ar[i];
        hole=i;
        while(hole>0 && ar[hole-1]>val){
            ar[hole]=ar[hole-1];
            hole=hole-1;
        }
        ar[hole]=val;
    }
}
void bubbleSort(int ar[], int n){
    int i,j,tmp=0;
    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            if(ar[j]>ar[j+1]){
                tmp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=tmp;
            }
        }
    }
}
void linearSearch(int ar[], int n, int x){
    int i,j,found=0;
    for(i=0; i<n; i++){
        if(ar[i]==x){
            found=1;
            printf("Found %d at position %d \n", x, i);
            break;
        }
        else found==0;
    }
    if(found==0) printf("Value not available in the array\n");
}
int binarySearch(int ar[], int n, int x){
    int i,j=0,first=0, last=n-1,mid;
    while(first<last){
        mid=(first+last)/2;
        if(ar[mid]==x){
            j=1;
            return mid;
        }
        else if(ar[mid]>x) last=mid-1;
        else first=mid+1;
    }
}
int getMax(int ar[], int n){
    int mx=ar[0];
    for(int i=1; i<n; i++){
        if(ar[i]>mx){
            mx=ar[i];
        }
    }
    return mx;
}
void countSort(int ar[], int n, int power){
    int output[n], cnt[10]={0}, i;
    for(i=0; i<n; i++){
        cnt[(ar[i]/power)%10]++;
    }
    for(i=1; i<10; i++){
        cnt[i]+=cnt[i-1];
    }
    for(i=n-1; i>=0; i--){
        output[cnt[(ar[i]/power)%10]-1]=ar[i];
        cnt[(ar[i]/power) %10]--;
    }
    for(i=0; i<n; i++)
        ar[i]=output[i];
}
void radixSort(int ar[], int n){
    int m=getMax(ar, n);
    for(int power=1; m/power>0; power*=10)
        countSort(ar, n, power);

}
void printArray(int ar[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d ", ar[i]);
    }
    cout<<endl;
}
int main()
{
	int ar[100], n,i,j,select;
    cin>>n;
    printf("Insert array values:\n");
    for(i=0; i<n; i++){
        cin>>ar[i];
    }
	while(1){
        printf("1\tBubble Sort\n");
        printf("2\tInsertion Sort\n");
        printf("3\tRadix Sort\n");
        printf("4\tLinear search\n");
        printf("5\tBinary search\n");
        printf("6\tQuit\n");
        printf("Select: ");
        cin>>select;
        if(select==1){
            printf("Bubble Sort\n");
            bubbleSort(ar, n);
            printArray(ar,n);
            cout<< "Time complexity of Bubble sort is: O(n^2)\n";
        }
        else if(select==2){
            printf("Insertion Sort\n");
            inSort(ar, n);
            printArray(ar,n);
            cout<< "Time complexity of Insertion sort is: O(n^2)\n";
        }
        else if(select==3){
            printf("Radix Sort\n");
            radixSort(ar, n);
            printArray(ar,n);
            cout<< "Time complexity of Radix sort is: O(d*(n+b))\n";
        }
        else if(select==4){
            cout<< "Enter value to search: ";
            cin>>j;
            linearSearch(ar,n,j);
            cout<< "Time complexity of Linear search is: O(n)\n";
        }
        else if(select==5){
            cout<< "Enter value to search: ";
            cin>>j;
            cout<< "Found at index "<<binarySearch(ar, n, j)<< "\n";
            cout<< "Time complexity of Binary search is: O(log n)\n";
        }
        else if(select==6) {
            cout<< "Program terminated successfully\n";
            break;
        }
        else cout<< "Select a valid option\n";
	}
    return 0;
}
//22 3 54 223 54 77 2323 56 23 1 5 86 4 79 34 9 124 466 336 113
