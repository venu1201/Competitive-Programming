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
        long long int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        if(k==1)
        {
            cout<<count(str.begin(),str.end(),'*')<<endl;
            continue;
        }
        int cnt=0,x,y;
        auto it=find(str.begin(),str.end(),'*');
        
        if(it!=str.end())
        {
            x=it-str.begin();
        str[it-str.begin()]='X';
        cnt++;
        }
        else
        {
            cout<<0<<endl;
            continue;
        }
        
        reverse(str.begin(),str.end());
       
        it=find(str.begin(),str.end(),'*');
      
        if(it!=str.end())
        {
            y=it-str.begin();
            y=str.length()-1-y;
        str[it-str.begin()]='X';
        cnt++;
        }
        else
        {
            
            cout<<cnt<<endl;
            continue;
        }
        if(y-x<=k)
        {
            cout<<2<<endl;
            continue;
        }
        reverse(str.begin(),str.end());
        it=find(str.begin(),str.end(),'X');
        x=it-str.begin();
        y=find(it,str.end(),'*')-str.begin();
        while(it!=str.end())
        {
            it=find(it+1,str.end(),'*');
            if(it-str.begin()-x>k)
            {
                str[y]='X';
                x=y;
                cnt++;
            }
            y=it-str.begin();

        }
       
        cout<<cnt<<endl;


    }
return 0;
}