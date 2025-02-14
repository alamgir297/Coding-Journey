
#include<bits/stdc++.h>
using namespace std;

struct node
{
    struct node* left;
    struct node* right;
    int val;
};

struct node* Insert(struct node* root,int temp)
{
    if(root==NULL)
    {
        root=(struct node*)malloc(sizeof(struct node));
        root->val=temp;
        root->left=NULL;
        root->right=NULL;
    }

    else if(root->val>temp)
        root->left=Insert(root->left,temp);



    else if(root->val<temp)
        root->right=Insert(root->right,temp);

    return root;
}

struct node* findMax(struct node* root)
{
    if(root->right==NULL)return root;

    struct node* temp=findMax(root->right);

    return temp;
}

struct node* findMin(struct node* root)
{
    if(root->left==NULL)return root;

    struct node* temp=findMin(root->left);

    return temp;
}

void Search(struct node* root)
{
    int temp;
    bool flag=false;

    printf("Enter the value to search for:");
    cin>>temp;


    while(1)
    {
        if(root==NULL)break;

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
            struct node* cpy=findMin(root->right);
            root->val=cpy->val;
            root->right=del(root->right,cpy->val);
        }
        return root;
    }
}
void PrintLevelOrder(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty()) {
        node* t = q.front();
        q.pop();
        if (t == NULL) {
            cout << endl;
            if (!q.empty())
                q.push(NULL);
        }
        else {
            cout << t->val << ' ';
            if (t->left != NULL)
                q.push(t->left);
            if (t->right != NULL)
                q.push(t->right);
        }
    }
}


int main()
{
    struct node* root=NULL;
    int temp,select;

    printf("1\tInsert a node\n");
    printf("2\tDelete a node\n");
    printf("3\tSearch\n");
    printf("4\tFind max\n");
    printf("5\tFind min\n");
    printf("6\tTraversal\n");
    printf("7\tQuit\n");
    printf("Select an operation\n\n");
    while(1)
    {
        printf("Select : ");
        cin>>select;

        if(select==1)
        {
            printf("Enter value:");
            cin>>temp;
            root=Insert(root,temp);
        }
        if(select==2)
        {
            printf("Enter the value to delete:");
            cin>>temp;
            root=del(root,temp);
        }
        if(select==3)Search(root);

        if(select==4)cout<<"max value is "<<findMax(root)->val<<endl;

        if(select==5)cout<<"min value is "<<findMin(root)->val<<endl;
        if(select==6){
            cout<< "Printing in level order:\n";
            PrintLevelOrder(root);
        }
        if(select==7){
            cout<< "thanks\n";
            break;
        }
    }
    return 0;
}
