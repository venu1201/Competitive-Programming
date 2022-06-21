#include<bits/stdc++.h>
using namespace std;
bool fun(int x,string str,vector<string> arr,string s)
    {
        cout<<x<<" "<<str<<endl;
        if(str.length()>=s.length() || x==arr.size())
        {
            
            if(str!=s)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
        bool ans=false;
        ans=ans||fun(x,str+arr[x],arr,s);
        for(int i=0;i<arr.size();i++)
        {
            if(x+i!=x)
            {
            ans=ans||fun(x+i,str,arr,s);
            }
        }
        return ans;
        
    }
    bool wordBreak(string s, vector<string>& arr) {
        return fun(0,"",arr,s);
         
    }

int main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    string s="applepenapple";
    
    vector<string> arr={"apple","pen"};
    cout<<wordBreak(s,arr);
    

return 0;
}