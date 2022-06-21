#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

 int T;
 cin>>T;

 while(T--)
 {
      int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int start=a[0],check=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]>start)
        {
            cout<<-1<<endl;
            check=1;
            break;
            
        }
    }
    if(check==1)
    continue;
    stack<int>s;
    for(int i=1;i<n;i++){
        while(s.size() and s.top()<=a[i])
        {
            s.pop();
        }
        s.push(a[i]);
    }
    int ans=0;

    while(!s.empty())
    {
        ans++;
        s.pop();
    }
    cout<<ans<<endl;
 }
 
 return 0;
}