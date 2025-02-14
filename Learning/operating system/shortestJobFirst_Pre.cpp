#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pr;
int main()
{
    int n, sum_w=0, sum_t=0,maxArTime=0,totCpu=0;
    cin>>n;
    int x, wait[n+1], ta[n+1],y;
    vector<pair<int,int>>cpu;
    vector<pair<int,int>>hashTb;
    map<int,int> At;
    map<int,int> mp;
    for(int i=0; i<n; i++){
        cout<< "enter cpu and arrival time of p["<<i+1<< "]: ";
        cin>>x>>y;
        totCpu+=x;
        maxArTime=max(maxArTime, y);
        cpu.push_back({x,y});
        At[i+1]=y;
        mp[x]=i+1;
    }
    int timer=0;
    priority_queue<pr, vector<pr>, greater<pr>> pq;
    pq.push(cpu[0]);
    while(totCpu!=timer){
        auto[x,y]=pq.top();
        pq.pop();
        if(timer!=maxArTime){
            timer++;
            totCpu--;
            hashTb.push_back({y,timer});
            x--;
            if(x!=0){
                pq.push({x,y});
            }
            for(int i=0; i<n; i++){
                if(cpu[i].first==timer){
                    auto[x,y]=cpu[i];
                    pq.push({x,y});
                }
            }
        }
        else{
            while(!pq.empty()){
                auto[x,y]=pq.top();
                pq.pop();
                timer+=x;
                hashTb.push_back({y,timer});
            }
        }

    }
    printf("Average waiting time = %.2f\n",((float)sum_w/n));
    printf("Average turnaround time = %.2f\n",((float)sum_t/n));
    int sz=hashTb.size();
    printf("==========Grand Chart==========");
    printf("\n|");
    for(int i=0;i<sz;i++){
        printf("   P%d   |",hashTb[i].first);}
    printf("\n0");
    for(int i=0;i<sz;i++){
        printf("       %d",hashTb[i].second);
    }
}
