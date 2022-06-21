#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    class node* pre;
    class node* next;
    node(int val)
    {
        data=val;
        pre=NULL;
        next=NULL;
    }
};
node* insertfront(node* head,int val)
{
    if(head==NULL)
    {
        head=new node(val);
        return head;
    }
    else
    {
        head->pre=new node(val);
        head->pre->next=head;
        head=head->pre;
        return head;
    }
}
node* insertback(node* head,int val)
{
    if(head==NULL)
    {
        head=new node(val);
        return head;
    }
    if(head->next==NULL)
    {
        head->next=new node(val);
        head->next->pre=head;
        return head;
    }
    else
    {
        node* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new node(val);
        temp->next->pre=temp;
        return head;
    }
}
node* deletefront(node* head)
{
    if(head==NULL)
    {
        cout<<"invalid";
        return head;
    }
    else if(head->next==NULL)
    {
        head=NULL;
        return head;
    }
    node* del=head;
    head->next->pre=NULL;
    head=head->next;
    delete del;
    return head;
}
node* deleteback(node* head)
{
    if(head==NULL)
    {
        cout<<"invalid";
        return head;
    }
    else if(head->next==NULL)
    {
        head=NULL;
        return head;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    node* del=temp;
    temp->pre->next=NULL;
    delete del;
    return head;
}
void print(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }cout<<endl;
}
int main()
{
    node* head=NULL;
    while(1)
    {
    int n;
    cin>>n;
    switch (n)
    {
    case 1:
        int val1;
        cin>>val1;
        head=insertfront(head,val1);
        print(head);
        break;
    case 2:
        int val2;
        cin>>val2;
        head=insertback(head,val2);
        print(head);
        break;
    case 3:
        head=deletefront(head);
        print(head);
        break;
    case 4:
        head=deleteback(head);
        print(head);
        break;
    case 5:
        print(head);
        break;
    case 6:
        exit(0);
        break;
    default:
        cout<<"enter valid number"<<endl;
    }
    
    }
    return 0;

    

}