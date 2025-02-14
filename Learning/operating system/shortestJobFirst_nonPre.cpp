#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum_w=0, sum_t=0;
    cin>>n;
    int x, wait[n+1], ta[n+1],y;
    vector<pair<int,int>> cpu;
    map<int,int> At;
    for(int i=0; i<n; i++){
        cout<< "enter cpu and arrival time of p["<<i+1<< "]: ";
        cin>>x>>y;
        cpu.push_back({x, i+1});
        At[i+1]=y;
    }
    sort(cpu.begin()+1,cpu.end());
    wait[0]=0;
    for(int i=1; i<cpu.size(); i++){
        wait[i]=cpu[i-1].first+wait[i-1]-At[cpu[i].second]+At[cpu[i-1].second];
        sum_w+=wait[i];
    }
    for(int i=0; i<n; i++){
        ta[i]=cpu[i].first+wait[i];
        sum_t+=ta[i];
    }
    printf("Process  CPU_time  Wait  Turnaround\n");
    for(int i=0;i<n;i++){
        printf("   P%d      %d       %d       %d",cpu[i].second,cpu[i].first,wait[i],ta[i]);
        printf("\n");
    }
    cout<<sum_t<< " "<< sum_w<<endl;
    printf("Average waiting time = %.2f\n",((float)sum_w/n));
    printf("Average turnaround time = %.2f\n",((float)sum_t/n));

    printf("==========Grand Chart==========");
    printf("\n|");
    for(int i=0;i<n;i++){
        printf("   P%d   |",cpu[i].second);}
    printf("\n0");
    for(int i=0;i<n;i++){
        printf("       %d",ta[i]+At[cpu[i].second]);
    }
}
