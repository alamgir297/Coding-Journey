#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum_w=0, sum_t=0;
    cin>>n;
    int x, wait[n+1], ta[n+1],y, prty;
    vector<pair<int,int>> priority;
    map<int,int> At;
    map<int,int> cpu;
    for(int i=0; i<n; i++){
        cout<< "enter cpu, arrival time and priority of p["<<i+1<< "]: ";
        cin>>x>>y>>prty;
        priority.push_back({prty, i});
        At[i]=y;
        cpu[i]=x;
    }
    ta[0]=0;
    sort(priority.rbegin(),priority.rend());
    wait[0]=0;
    for(int i=1; i<priority.size(); i++){
        int index=priority[i].second;
        cout<<index<<endl;
        wait[i]=cpu[index-1]+wait[i-1]-At[cpu[index]]+At[cpu[index-1]];
//        cout<<cpu[index-1]<< "+"<<wait[i-1]<<"-"<<At[cpu[index]]<< " "<<At[cpu[index-1]]<<endl;
        sum_w+=wait[i];
    }
    for(int i=0; i<n; i++){
        ta[i]+=(cpu[priority[i].second]-At[priority[i].second]);
        sum_t+=ta[i];
    }
    printf("Process  CPU_time  Wait  Turnaround\n");
    for(int i=0;i<n;i++){
        printf("   P%d      %d       %d       %d",priority[i].second+1,cpu[priority[i].second],wait[i],ta[i]);
        printf("\n");
    }
    cout<<sum_t<< " "<< sum_w<<endl;
    printf("Average waiting time = %.2f\n",((float)sum_w/n));
    printf("Average turnaround time = %.2f\n",((float)sum_t/n));

    printf("==========Grand Chart==========");
    printf("\n|");
    for(int i=0;i<n;i++){
        printf("   P%d   |",priority[i].second+1);}
    printf("\n0");
    for(int i=0;i<n;i++){
        printf("       %d",ta[i]+At[priority[i].second]);
    }
}
