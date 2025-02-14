#include<stdio.h>
#include<stdlib.h>

int Size=0;

struct alamgir{
    int val;
    struct alamgir* next;
};


struct alamgir* insert(struct alamgir *ptr){
    struct alamgir *current=malloc(sizeof(struct alamgir));

    int pos;
    printf("Enter value: ");
    scanf("%d",&current->val);

    printf("Enter position: ");
    scanf("%d",&pos);

    if(pos>Size+1||pos<=0){
        printf("Can not be inserted in specified position\n\n");
        return ptr;
    }

    if(ptr==NULL||pos==1){
        current->next=ptr;
        Size++;
//        printf("Inserted successfully\n\n");
        return current;
    }

    struct alamgir* temp=ptr;

    int tpos=pos;

    pos--;
    while(--pos)
        temp=temp->next;

    current->next=temp->next;
    temp->next=current;

    Size++;
//    printf("Inserted successfully\n\n");
    if(tpos==1)return temp;
    else return ptr;
}
void deleteNode(struct alamgir *ptr){
    if(ptr==NULL){
        printf("List is empty\n\n");
        return;
    }
    int num;
    printf("Enter the value you'd like to delete: ");
    scanf("%d",&num);
    struct alamgir *temp=ptr;
    struct alamgir *current=temp->next;

    if(ptr->val==num){
        ptr=ptr->next;
        free(temp);
        printf("Deleted successfully\n\n");
        Size--;
        return;
    }

    while(1){
        if(current->val==num){
            temp->next=current->next;
            free(current);
            printf("Deleted successfully\n\n");
            Size--;
            return;
        }

        temp=current;
        current=current->next;
    }

}

int searchNode(struct alamgir* head, int x)
{
    struct alamgir* current = head;  // Initialize current
    while (current != NULL)
    {
        if (current->val == x)
            return 1;
        current = current->next;
    }
    return 0;
}
void printList(struct alamgir* node)
{
    while (node != NULL) {
        printf(" %d ", node->val);
        node = node->next;
    }
}
int main()
{
    struct alamgir  *ptr;
    int x;
    ptr=NULL;
    int select;
        printf("1\tInsert a node\n");
        printf("2\tDelete a node\n");
        printf("3\tSearch a node\n");
        printf("4\tPrint\n");
        printf("5\tQuit\n");
    printf("Select an operation\n\n");
    while(1){
        printf("Select:");
        scanf("%d",&select);

        if(select==1){
          ptr=insert(ptr);
        }
        if(select==2){
            deleteNode(ptr);
        }
        if(select==3){
            printf("Enter value to search for: ");
            scanf("%d", &x);
            if(searchNode(ptr, x)) printf("Found\n");
            else printf("Not found\n");
        }
        if(select==4){
          printList(ptr);
          printf("\n");
        }
        if(select==5){
            printf("Thanks\n");
            break;
        }
    }
    return 0;
}


