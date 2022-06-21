#include<stdio.h>
struct node {
    int data;
    struct node* next; 
    struct node* prev; 
};
void insertfront(struct node* head,int data)
{
    struct node* n=NULL;
    n->data=data;
    n->prev=NULL;
    n->next=NULL;
    if(head==NULL)
    {
        head=n;
        return;
    }
    else{
        head->prev=n;
        n->next=head;
        head=n;
    }
    return;
}
void print(struct node* head)
{
 struct node* temp=head;
 while(temp->next!=NULL)
 {
     printf("%d ",temp->data);
     temp=temp->next;
 }
 return;
}
int main()
{
    struct node* head=NULL;
    while(1)
    {
        printf("enter 1 for insert front \n enter 2 for delete from front\n enter 3 for insert from back \n enter 4 for delete from back")
    }
}