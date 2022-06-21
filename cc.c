#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node* next;
  struct node* pre;
};
void insertfront(struct node** head)
{
  int val;
  scanf("%d",&val);
  struct node* n = (struct node*)malloc(sizeof(struct node));
  if(*head==NULL)
  {
      n->data=val;
      n->next=NULL;
      n->pre=NULL;
      *head=n;
      return;
  }  
  n->data = val;
  n->next = *head;
  n->pre=NULL;
  *head = n;
}
void insertback(struct node** head)
{
  int val;
  scanf("%d",&val);
  struct node* n = (struct node*)malloc(sizeof(struct node));
  n->data = val;
  n->next=NULL;
  n->pre=NULL;
  if(*head==NULL)
  {
      *head=n;    
      return;
  }
  struct node* temp=*head;
  while(temp->next!=NULL)
  {
      temp=temp->next;
  }
  temp->next=n;
  temp->next->pre=temp->next;
}
void deletefront(struct node** head)
{
  if(*head==NULL)
  {
      return;
  }
  struct node* del=*head;
  *head=del->next;
  struct node* temp=*head;
  temp->pre=NULL;
  free(del);

}

void deleteback(struct node** head)
{
    
     if(*head == NULL)
    {
        return;
    }
    else
    {
        struct node* del = *head;
        struct node* last = *head;
        while(del->next != NULL)
        {
            last= del;
            del = del->next;
        }

        if(del == *head)
        {
            *head = NULL;
        }
        else
        {
            
            last->next = NULL;
        }

       
        free(del);

    }
}
void print(struct node* head)
{
  while (head != NULL) 
  {
  printf("%d ", head->data);
  head = head->next;
  }
  printf("\n");
}
int main()
{
    struct node* head=NULL;
    while(1)
    {
    int n;
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        insertfront(&head);
        
        break;
    case 2:
        insertback(&head);
      
        break;
    case 3:
        deletefront(&head);
       
        break;
    case 4:
        deleteback(&head);
        
        break;
    case 5:
        print(head);
        break;
    case 6:
        exit(0);
        break;
    default:
        printf("invalid enter\n");
    }
    
    }
    return 0;

    

}