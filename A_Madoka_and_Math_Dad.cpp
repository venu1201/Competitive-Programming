#include<bits/stdc++.h>
using namespace std;
class item{
    private:
    	
    int item_id;
    int quantity;
    string itemlabel;
    char itemlab[10];
    public:
    	item()
    	{
    	//	cout<<"item constructor"<<endl;
		}
		item(const item &lp)
		{
		//	cout<<"item copy constructor"<<endl;
		}
		~item()
		{
		//	cout<<"item destructor"<<endl;
		}
    	
        void set(int ,int  ,string );
        void setlabel(char[]);
        int getitem();
        int getquantity();
        string getitemlabel();
};

void item::set(int itm,int quan ,string s)
{
	item_id=itm;
    quantity=quan;
    itemlabel=s;
}
int item::getquantity()
{
    return quantity;
}
int item::getitem()
{
	return item_id;
}
string item::getitemlabel()
{
    return itemlabel;
}

class Stack {
	private:
		
    int top;
 	int size;
    item *arr; 
	public:
		
 	Stack(int siz)
	{ 
	 top = -1;
	 size=siz+1;
	 arr=new item[siz+1];
	}
	~Stack()
	{
		delete[] arr;
	//	cout<<"stack destructor";
	}
	
    bool push(item &x);
    item pop();
    item topp();
    bool isEmpty();
    void display();
};
 
bool Stack::push(item &x)
{
    if (top > size ) 
	{
        cout << "Stack Overflow";
        return false;
    }
    else 
	{
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
        item &x = arr[top--];
        return x;
    }
}
item Stack::topp()
{
	
    if (top < 0) {
        cout << "Stack is Empty";
    }
    else
	 {
	 	item &x=arr[top];
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
        cout<<arr[i].getitem()<<" "<<arr[i].getquantity()<<" "<<arr[i].getitemlabel()<<endl;
      cout<<endl;
   }
    else
   {
       cout<<"stack is empty"<<endl;
   }
   
}


int main()
{
	char temp[10];
	int sizes,itm,quan;

    cin>>sizes;
    class Stack st(sizes);
    item it;
    string s;
    for(int i=0;i<sizes;i++)
    {
        
        
        cin>>itm>>quan>>s>>temp; 
        it.set(itm,quan,s);
        st.push(it);
    }
    st.display();
    st.pop();
    st.display();
    st.pop();
    st.display();
    item *x=st.topp();
    cout<<x.getquantity()<<endl;
   
    
    
return 0;
}