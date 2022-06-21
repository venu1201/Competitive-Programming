#include<iostream>
#include<map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    while(T--)
    {
         map<int,int> st;
         int a,b,c,d;
         cin>>a>>b>>c>>d;
         st[a]++;
         st[b]++;
         st[c]++;
         st[d]++; 
         if(st.size()==4 || st.size()==3)
         cout<<"2"<<endl;
         else if(st.size()==1)
         cout<<"0"<<endl;
         else
         {
             if(st[a]==3 || st[b]==3)
             cout<<"1"<<endl;
             else
             cout<<"2"<<endl;
         } 
         
    }
    return 0;
}