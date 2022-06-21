#include<iostream>
using namespace std;
struct studentNode{  //structure
   int id;
   string name;
   studentNode *ptrNextNode;
   studentNode *ptrPrevNode;
}*root,*end;

void create()   //creating node at the end
{
   struct studentNode *t;
   t=new studentNode();
   cout<<"-----Inserting new node-------\n";//input
   cout<<"Enter student name:-";cin>>t->name;
   cout<<"Enter student id:-";cin>>t->id;
   t->ptrNextNode = t->ptrPrevNode = NULL;
   if(root==NULL)
   {
       root=t;
       end =t;  
   }
   else
   {
       end->ptrNextNode = t;
       t->ptrPrevNode = end;
       end = t;
   }
   cout<<"Node inserted \n";
}
void traversefarward()   //traversing forward direction
{
   struct studentNode *t=root;
   cout<<"Traversing list in forward direction:-\n";
   while(t!=NULL)
   {
       cout<<t->name;cout<<" (";cout<<t->id;cout<<")<-->";
       t=t->ptrNextNode;
   }
   cout<<"NULL"<<endl;
  
}
void traversebackward()   //traversing in backward direction
{
   struct studentNode *t=end;
   cout<<"Traversing list in backward direction:-\n";
   while(t!=NULL)
   {
       cout<<t->name;cout<<" (";cout<<t->id;cout<<")<-->";
       t=t->ptrPrevNode;
   }
   cout<<"NULL"<<endl;
  
}

int main()
{
   int c;
   while(1)
   {
   cout<<"\n\n1.create a node\n2.traverse list forward\n3.traverse list backward\n4.exit\nEnter your choice:--";  
   cin>>c;
   switch(c)
   {
       case 1:
           create();
           break;
       case 2:
           traversefarward();
           break;
       case 3:
           traversebackward();
           break;
       case 4:
           break;
          
      
   }
   if(c==4)break;  
   }
}