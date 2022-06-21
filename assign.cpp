#include<bits/stdc++.h>
#define int long long int
using namespace std;
class item{
    public:
    int item_id;
    int quantity;
    string itemlabel;
        void set(int item,int quan ,string s)
        {
            item_id=item;
            quantity=quan;
            itemlabel=s;
        } 
        item get(item x)
        {
            return x;
        }
};
class Stack {
    int top;
 
public:
    item arr[100]; 
 
    Stack() { top = -1; }
    bool push(item x);
    item pop();
    item topp();
    bool isEmpty();
    void display();
};
 
bool Stack::push(item x)
{
    if (top >= (1000 - 1)) {
        cout << "Stack Overflow";
        return false;
    }
    else {
        arr[++top] = x;
        return true;
    }
}
 
item Stack::pop()
{
    if (top < 0) {
        cout << "Stack Underflow";
    }
    else {
        item x = arr[top--];
        return x;
    }
}
item Stack::topp()
{
    if (top < 0) {
        cout << "Stack is Empty";
    }
    else {
        item x = arr[top];
        return x;
    }
}
 
bool Stack::isEmpty()
{
    return (top < 0);
}
void Stack::display() {
   if(top>=0) {
     
      for(int i=top; i>=0; i--)
        cout<<arr[i].item_id<<" "<<arr[i].quantity<<" "<<arr[i].itemlabel<<endl;
      cout<<endl;
   } else
   {
       cout<<"stack is empty"<<endl;
   }
   
}
int32_t main()
{
    class Stack st;
    for(int i=0;i<3;i++)
    {
        item it;
        int item,quan;
        string s;
        cin>>item>>quan>>s; 
        it.set(item,quan,s);
        st.push(it);
        st.display();
    }
    st.pop();
    st.display();
    cout<<st.topp().item_id<<" "<<st.topp().quantity<<" "<<st.topp().itemlabel<<endl;;
    cout<<st.isEmpty()<<endl;
    st.pop();
    st.display();
    st.pop();
    st.display();
    cout<<st.isEmpty()<<endl;
    
    
    
return 0;
}