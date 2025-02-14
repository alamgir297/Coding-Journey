#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum_w=0, sum_t=0;
    cin>>n;
    int cpu[n+1], wait[n+1], At[n+1], ta[n+1];
    for(int i=0; i<n; i++){
        cout<< "enter cpu and arrival time of p["<<i+1<< "] process:";
        cin>>cpu[i]>>At[i];
    }
    wait[0]=0;
    for(int i=1; i<n; i++){
        wait[i]= cpu[i-1]+wait[i-1]-At[i]+At[i-1];
        sum_w+=wait[i];
    }
    for(int i=0; i<n;i++){
        ta[i]=wait[i]+cpu[i];
        sum_t+=ta[i];
    }
    printf("Process  CPU_time  Wait  Turnaround\n");
    for(int i=0;i<n;i++){
        printf("   P%d      %d       %d       %d",i+1,cpu[i],wait[i],ta[i]);
        printf("\n");
    }
    cout<<sum_t<< " "<< sum_w<<endl;
    printf("Average waiting time = %.2f\n",((float)sum_w/n));
    printf("Average turnaround time = %.2f\n",((float)sum_t/n));

    printf("==========Grand Chart==========");
    printf("\n|");
    for(int i=0;i<n;i++){
        printf("   P%d   |",i+1);}
    printf("\n0");
    for(int i=0;i<n;i++){
        printf("       %d",ta[i]+At[i]);
    }
}
