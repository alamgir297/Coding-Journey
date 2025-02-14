#include<bits/stdc++.h>
using namespace std;
int f,r;
void enqueue(int* q,int n)
{
    int temp=(r+1)%n;
    if(temp==f)
        cout<<"Overflow"<<endl;
    else
    {
        cout<<"Enter the value you'd like to enqueue :";
        cin>>temp;
        cout<<"here "<<f<<" "<<r<<endl;
        if(r==-1&&f==-1)
            f=r=0;
        else
            r=(r+1)%n;
        q[r]=temp;
    }
    return;
}
void dequeue(int* q,int n)
{
    if(f==-1&&r==-1)
        cout<<"Underflow"<<endl;
    else
    {
        cout<<q[f]<<endl;
        if(f==r)
            f=r=-1;
        else
            f=(f+1)%n;
    }
    return;
}
int main()
{
    f=r=-1;
    int n;
    cout<<"Enter the size of the queue"<<endl;
    cin>>n;
    int q[n];
    int command;
    cout<<"1\tEnqueue"<<endl;
    cout<<"2\tDequeue"<<endl;
    cout<<"3\tRear value"<<endl;
    cout<<"4\tFront value"<<endl;
    cout<<"5\tQuit"<<endl;
    cout<<endl;
    while(cin>>command&&command)
        if(command==1)enqueue(q,n);
        else if(command==2)dequeue(q,n);
        else if(command==3)cout<<q[r]<<endl;
        else if(command==4)cout<<q[f]<<endl;
    return 0;
}
