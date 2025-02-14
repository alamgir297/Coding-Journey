#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, qt,timer=0, sumTat=0, sumWait=0;
    cout<< "Enter n and quantum:\n";
    cin>>n>>qt;
    int cpu[n+1], rem[n+1]={0},totCpu=0, tat[n],wait[n+1], at[n+1];
    for(int i=0; i<n; i++){
        cin>>cpu[i];
        cin>>at[i];
        rem[i]=cpu[i];
        totCpu+=cpu[i];
    }
    vector<pair<int,int>> v;
    while(totCpu!=0){
        for(int i=0; i<n; i++){
            if(rem[i]==0) continue;
            if(rem[i]<=qt && rem[i]>0){
                totCpu-=rem[i];
                timer+=rem[i];
                v.push_back({timer, i+1});
                rem[i]=0;
                tat[i]=timer-at[i];
                wait[i]=tat[i]-cpu[i];
                sumTat+=tat[i];
                sumWait+=wait[i];

            }
            else if(rem[i]>0){
                rem[i]-=qt;
                timer+=qt;
                v.push_back({timer, i+1});
                totCpu-=qt;
            }
        }
    }
    printf("/Average wait time is : %lf\n",sumWait/(double)n);
    printf("Average turnaround time is : %lf\n\n",sumTat/(double)n);


    printf("Process-----CPU time-----Wait-----Turnaround time\n");



    for(int i=0; i<n; i++){
        printf("  P%d          %d           %d             %d\n",i+1,cpu[i],wait[i],tat[i]);
    }

    cout<<endl;

    int sz=v.size();
    cout<<"Grand chart"<<endl<<endl;

    cout<<'|';

    for(int i=0; i<sz; i++){
        printf("\tP%d\t|",v[i].second);
    }

    cout<<endl;

    cout<<0<<"\t\t";
    for(int i=0; i<sz; i++){
        printf("%d\t\t",v[i].first);
    }

    cout<<endl;
    cout<<endl;
}
