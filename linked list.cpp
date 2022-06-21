#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
};
void insertatfront(node* &head,int val)
{
    
    node* n = new node();
    n->data=val;
    if(head==NULL)
    {
        head=n;
        return;
    }
    n->next=head;
    head=n;
}
void insertatend(node* &head,int val)
{
    node* n= new node();
    n->data=val;
    n->next=NULL;
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    return;
}
void print(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
    return;
}
void deleted(node* &head,int val)
{
    if(head==NULL)
    {
        return;
    }
    if(head->data==val)
    {
        node* de=head;
        if(head->next==NULL)
        {
            delete de;
            return;
        }
        else
        {
        head=head->next;
        delete de;
        return;
        }
    }
    node* temp=head;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* d = temp->next;
    temp->next=temp->next->next;
    delete d;
    return;
}
int main()
{
    node* head=NULL;
    
        insertatend(head,1);
        insertatend(head,2);
        insertatfront(head,9);
        insertatend(head,4);
        insertatfront(head,55);
        deleted(head,55);
        print(head);
    
    return 0;

}