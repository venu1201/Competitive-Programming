#include<bits/stdc++.h>
using namespace std;
bool find(int left ,int right,string str)
{
    if(left>= right)
    {
        return true;
    }
    if(str[left]!=str[right])
    {
        return false;
    }
    find(left+1,right-1,str);
}

int main()
{
string str="madam";
cout<<find(0,str.length()-1,str)<<endl;
return 0;
}