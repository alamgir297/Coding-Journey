#include <stdio.h>
#include <stdlib.h>
int sz=0;
struct node
{
    int data;
    struct node* link;
};
struct node* insert_at_end(struct node* tail)
{
    int temp;
    printf("Enter the value you'd like to insert : ");
    scanf("%d",&temp);
    if(tail==NULL)
    {
        tail=malloc(sizeof(struct node));
        tail->data=temp;
        tail->link=tail;
    }
    else
    {
        struct node* n=malloc(sizeof(struct node));
        n->data=temp;
        n->link=tail->link;
        tail->link=n;
        tail=n;
    }
    sz++;
    printf("Inserted\n\n");
    return tail;
}
struct node* insert_after(struct node* tail)
{
    int s,temp;
    printf("Enter the number of the node you'd like to insert after : ");
    scanf("%d",&s);
    if(s>sz||s<1)printf("This node dosen't exist in the list\n");
    else if(s==sz)
    {
        tail=insert_at_end(tail);
        return tail;
    }
    else
    {
        printf("Enter the value you'd like to insert : ");
        scanf("%d",&temp);
        struct node* tnode=tail->link;
        struct node* n;
        while(s>1)
        {
            tnode=tnode->link;
            s--;
        }
        n->data=temp;
        n->link=tnode->link;
        tnode->link=n;
    }
    sz++;
    printf("Inserted\n\n");
    return tail;
}
void display(struct node* tail)
{
    if(tail==NULL)printf("The list is empty");
    else
    {
        struct node* t=tail;
        do
        {
            t=t->link;
            printf("%d ",t->data);
        }
        while(t!=tail);
    }
    printf("\n\n");
}
struct node* delete_first(struct node* tail)
{
    if(tail==NULL)printf("The list is empty\n\n");
    else
    {
        struct node* n=tail->link;
        tail->link=n->link;
        free(n);
        sz--;
        printf("Deleted\n\n");
    }
    return tail;
}
struct node* delete_after(struct node* tail)
{
    int s;
    printf("Enter the number of the node you'd like to delete after : ");
    scanf("%d",&s);
    if(s>sz||s<1)printf("This node dosen't exist in the list\n\n");
    else if(s==sz)
    {
        tail=delete_first(tail);
        return tail;
    }
    else
    {
        struct node* n=tail->link;
        struct node* temp;
        while(s>1)
        {
            n=n->link;
            s--;
        }
        temp=n->link;
        n->link=temp->link;
        free(temp);
        printf("Deleted\n\n");
    }
    sz--;
    return tail;
}
int main()
{
    struct node* tail=NULL;
    int select;
    printf("1\tInsert at the end\n");
    printf("2\tInsert after a given node \n");
    printf("3\tDisplay all the values\n");
    printf("4\tDelete the first node\n");
    printf("5\tDelete after a given node\n");
    printf("6\tSize of the list\n");
    printf("7\tQuit\n\n");
    while(scanf("%d",&select)&&select)
        if(select==1)tail=insert_at_end(tail);
        else if(select==2)tail=insert_after(tail);
        else if(select==3)display(tail);
        else if(select==4)tail=delete_first(tail);
        else if(select==5)tail=delete_after(tail);
        else if(select==6)printf("The size of the list is %d\n",sz);
    return 0;
}
