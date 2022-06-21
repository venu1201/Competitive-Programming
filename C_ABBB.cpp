#include<bits/stdc++.h>
using namespace std;
int main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    long long int T;
    cin>>T;
    while(T--)
    {
        stack<char> arr;
        string str;
        cin>>str;

        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='B')
            {
                if(arr.empty()==false)
                {
                    arr.pop();
                    continue;
                }
            }
           arr.push(str[i]);
           
            
        }
        cout<<arr.size()<<endl;

    }
return 0;
}