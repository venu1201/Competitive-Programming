#include <iostream>
using namespace std;

class item{
    private:
    	int item_id;
    	int quantity;
    	char itemlabel[10];
    public:
    	
    	item()
    	{
    		cout<<"item constructor"<<endl;
		}
		
		item(item &lp)
		{
			cout<<"item copy constructor"<<endl;
		}
		~item()
		{
			cout<<"item destructor"<<endl;
		}
		
		void set(int ,char*);
		void setQuantity(int );
        void get() const;
        int getQunatity() const;
};

void item::set(int i ,char s[10])
{
	item_id=i;
    
    *itemlabel=*s;//problem aa rahi
}

void item::setQuantity(int quan)
{
	quantity=quan;
}
void item::get() const
{
	cout<<item_id<<" "<<quantity<<" "<<itemlabel<<endl;
}
int item::getQunatity() const
{
	return quantity;
}
class Stack 
{
	private:
		item* arr;
		int top;
		int size;  
 		
	public:
		Stack(){
		cout<<"hi";
		}
    	Stack(int s)  
		 { 
		 	size=s;
		 	arr=new item[size];
		 	top = -1;
		  }
		Stack(Stack &lpt){}
		~Stack()
		  {
		  	delete[] arr;
		  	cout<<"stack destructor";
		  }
		  
    	void push(item &x);
    	void pop();
    	item topp();
    	bool isEmpty();
    	void display(item &);
    	Stack sort(Stack &);
    	void removeMid(Stack&);
};

Stack Stack::sort(Stack &k)
{
	Stack temp;
	int val=0;
	while(!k.isEmpty())
	
	{
//		item &x =k.topp();
	//	item &x=arr[top];
		item x=k.topp();
		k.pop();
		while(!temp.isEmpty()&&temp.topp().getQunatity()>x.getQunatity())
		{
	//		k.push(temp.topp(&));
			temp.pop();
		}
//		temp.topp()=k.topp();
		temp.push(x);
	}
	
	return temp;
}


void Stack::removeMid(Stack &k)
{
	
	
}

bool Stack::isEmpty()
{
    return (top == -1);
}

void Stack::push(item &x)
{
    if (top >= (size - 1))
	{
        cout << "Stack Overflow"<<endl;
        return ;
    }
    arr[++top] = x;
        
}
 
item Stack::topp()
{
    if (top ==-1 ) 
	{
        cout << "Stack is Empty"<<endl;
    }
    else
	 {
        item &x = arr[top];
    	return x;    
    }
    
}
 

void Stack::display(item &x) {
	int temp=top;
	cout<<"\nDisplaying stack:\n";
	if(top==-1)
	{ 
		cout<<"stack is empty from display"<<endl;
		return ;
	}
   
    for(int i=top; i>=0; i--)
    {
    	//topp();
    	x=arr[top];
    	x.get();
    	top--;
    	cout<<endl;
	}
    top=temp;    //restoring
 
}

void Stack::pop()
{
    if (top < 0) 
	{
        cout << "Stack Underflow";
    }
    else
	 {
       top--;
    }
}



int main()
{
	int in,quan,sizes;
	cout<<"enter size:"<<endl;
    cin>>sizes;
    Stack st(sizes);
    item it;
    char s[10];
    
    for(int i=0;i<sizes;i++)
    {
    	
        cout<<"enter item_id,quanity,label:";
        cin>>in>>quan>>s; 
        it.set(in,s);
        it.setQuantity(quan);
        st.push(it);
        
    }
    st.display(it);
    st.pop();
    st.pop();
    cout<<"\n";
    if(st.isEmpty())
    {
    	cout<<"naman";
	}
    st.display(it);
    
    cout<<"\nenter item_id,quanity,label:";
    cin>>in>>quan>>s; 
    it.set(in,s);
    it.setQuantity(quan);
    st.push(it);
   	st.display(it);
   	
   //	st=st.sort(st);
   	return 0;
}





