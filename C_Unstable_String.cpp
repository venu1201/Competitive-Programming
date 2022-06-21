#include<bits/stdc++.h>
using namespace std;
class item{
    private:
    	
    int item_id;
    int quantity;
    string itemlabel;
    public:
    	
    	
        void set(int ,int  ,string );
        void setlabel(char[]);
        int getitem();
        int getquantity();
        string getitemlabel();
};

class Stack {
	private:
		
    int top;
 	int size;
    item *arr; 
	public:
		
 	Stack(int siz)
	{ 
	 top = -1;
	 size=siz;
	 arr=new item[siz];
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
    void sort(Stack&);
    void rmv(Stack&,int);
};

void item::set(int itm,int quan ,string s)
{
	item_id=itm;
    quantity=quan;
    itemlabel=s;
}
int item::getquantity()
{
    return this->quantity;
}
int item::getitem()
{
	return this->item_id;
}
string item::getitemlabel()
{
    return this->itemlabel;
}


 
bool Stack::push(item &x)
{
    if (top > size ) 
	{
        cout << "Stack Overflow";
        return false;
    }
    else 
	{
        this->arr[++top] = x;
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
	
	 	item x;
		x=arr[top];
		
	 	
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

void Stack::rmv(Stack &s, int current)
	{ 
    if(s.isEmpty() || current == size){ 
        return ; 
    }
    item ni;
    ni.set(arr[top].getitem(),arr[top].getquantity(),arr[top].getitemlabel());
	// cout<<ni.getitemlabel();
    s.pop();
    
    rmv(s, current+1); 
    
    if(current != size/2){ 
        s.push(ni); 
    }
    else
    {
    	s.push(ni);
	}
    //cout<<ni.getitem()<<ni.getitemlabel()<<ni.getquantity();
   // return s;
}
 
void Stack::sort(Stack &input)
{
	
    Stack tmpStack(top+1);
	Stack a(top+1);
    while (!input.isEmpty())
    {
    	
    	item temp=input.topp();
		input.pop();
    	int val;
    	val=temp.getquantity();
        while (!tmpStack.isEmpty() && tmpStack.topp().getquantity() > val)
        {
        
			item x=tmpStack.topp();
            input.push(x);
            tmpStack.pop();
           
        }
        tmpStack.push(temp);
    }
	while(!tmpStack.isEmpty())
	{
		item x=tmpStack.topp();
		a.push(x);
		tmpStack.pop();
	}
	while(!a.isEmpty())
	{
		item x=a.topp();
		input.push(x);
		a.pop();
	}
    return;
}




int main()
{
	int sizes,itm,quan;

    cin>>sizes;
    class Stack st(sizes);
    item it;
    string s;
    for(int i=0;i<sizes;i++)
    {
        
        
        cin>>itm>>quan>>s; 
        it.set(itm,quan,s);
        st.push(it);
    }
    st.display();
	st.sort(st);
	st.display();
	
	st.pop();
	item x=st.topp();
	st.display();
	cout<<x.getitemlabel()<<endl;
    //st.rmv(st,0);
    //Stack ans(sizes);
    //ans=st.rmv(st,0);
    //st.display();
    
    
    //cout<<k.getitemlabel()<<k.getquantity()<<"hi";
    
    /*
    st.pop();
    st.pop();
    cout<<"enter item_id,quanity,label,char:";
    cin>>itm>>quan>>s; 
    it.set(itm,quan,s);
    st.push(it);
    st.topp();
    cout<<"\n";
    st.display();
	//st.pop();
	if(!st.isEmpty())
	{
		cout<<"stack is not empty"<<endl;
	}
	
    */
    
return 0;
}