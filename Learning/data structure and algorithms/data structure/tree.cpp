#include<bits/stdc++.h>
using namespace std;
int sz=0;
struct node
{
    struct node* left;
    struct node* right;
    int val;
};
void printLevel(struct node* root)
{
    if (!root)
        return;
    cout<<"printing by level"<<endl;
    int lv=0;
    queue<pair<struct node*, int> > q;
    q.push({root, 1});
    pair<struct node*, int> p;
    while (!q.empty())
    {
        p = q.front();
        q.pop();
        if(lv<p.second)
        {
            lv=p.second;
            cout<<endl;
        }
        cout <<p.first->val<<" ";
        if (p.first->left)
            q.push({ p.first->left, p.second + 1 });
        if (p.first->right)
            q.push({ p.first->right, p.second + 1 });
    }
    cout<<endl;
}
struct node* findmax(struct node* root)
{
    if(root->right==NULL)return root;
    struct node* temp=findmax(root->right);
    return temp;
}
struct node* findmin(struct node* root)
{
    if(root->left==NULL)return root;
    struct node* temp=findmin(root->left);
    return temp;
}
struct node* ins(struct node* root,int temp)
{
    if(root==NULL)
    {
        root=(struct node*)malloc(sizeof(struct node));
        root->val=temp;
        root->left=NULL;
        root->right=NULL;
    }
    else if(root->val>=temp)
        root->left=ins(root->left,temp);
    else if(root->val<temp)
        root->right=ins(root->right,temp);
    sz++;
    return root;
}
void src(struct node* root)
{
    int temp;
    bool flag=false;
    printf("Enter the value to search for:");
    cin>>temp;
    while(root!=NULL)
    {
        if(root->val==temp)
        {
            flag=true;
            break;
        }
        if(root->val>temp)root=root->left;
        else if(root->val<temp)root=root->right;
    }
    if(flag)cout<<"The value was found in the tree"<<endl;
    else cout<<"The value was not found in the tree"<<endl;
}
struct node * del(struct node* root,int temp)
{
    if(root==NULL)return root;
    if(temp<root->val)root->left=del(root->left,temp);
    else if(temp>root->val)root->right=del(root->right,temp);
    else
    {
        if(root->left==NULL&&root->right==NULL)
        {
            delete root;
            root=NULL;
        }
        else if(root->left==NULL)
        {
            struct node* cpy=root;
            root=root->right;
            delete cpy;
        }
        else if(root->right==NULL)
        {
            struct node* cpy=root;
            root=root->left;
            delete cpy;
        }
        else
        {
            struct node* cpy=findmin(root->right);
            root->val=cpy->val;
            root->right=del(root->right,cpy->val);
        }
        sz--;
        return root;
    }
}
int main()
{
    struct node* root=NULL;
    int temp,select;
    printf("1\tInsert a value\n");
    printf("2\tDelete a value\n");
    printf("3\tDisplay the tree\n");
    printf("4\tNumber of nodes in the tree\n");
    printf("5\tSearch for a value\n");
    printf("6\tQuit (0)\n");
    cout<<endl;
    while(cin>>select&&select){
        if(select==1){
            printf("Enter the value to insert:");
            cin>>temp;
            root=ins(root,temp);
        }
        if(select==2){
            printf("Enter the value to delete:");
            cin>>temp;
            root=del(root,temp);
        }
        if(select==3){
            if(root==NULL)cout<<"The list is empty"<<endl;
            else printLevel(root);
        }
        if(select==4)cout<<"There are "<<sz<<" elements in the tree"<<endl;
        if(select==5)src(root);
    }
    return 0;
}
