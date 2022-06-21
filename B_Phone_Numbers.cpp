#include<bits/stdc++.h>
using namespace std;
int main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    long long int T;
    cin>>T;
    vector<vector<int>> ans;
    vector<string> names;
    while(T--)
    {
        long long int n;
        cin>>n;
        string str;
        cin>>str;
        names.push_back(str);
        vector<int> t(3);
        for(int i=0;i<3;i++)
        {
            t[i]=0;
        }
        vector<string> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            vector<char> check;
            for(int j=0;j<arr[i].size();j++)
            {
                if(arr[i][j]!='-')
                {
                    check.push_back(arr[i][j]);
                }
            }
            if(count(check.begin(),check.end(),check[0])==6)
            {
                t[0]++;
                continue;
            }
            int ch=-1;
            for(int i=0;i<check.size()-1;i++)
            {
                if(check[i]>check[i+1])
                {
                    continue;
                }
                else
                {
                    ch=0;
                }
            }
            if(ch==-1)
            {
                t[1]++;
            }
            else
            {
            t[2]++;
            }

        }
        ans.push_back(t);
    }
    map<int,vector<string>> mp;
    int m=-1;
    for(int i=0;i<ans.size();i++)
    {
        mp[ans[i][0]].push_back(names[i]);
        if(m<ans[i][0])
        {
            m=ans[i][0];
        }
    }
    cout<<"If you want to call a taxi, you should call: ";
    for(int i=0;i<mp[m].size();i++)
    {
        cout<<mp[m][i];
        if(i!=mp[m].size()-1)
        {
            cout<<", ";
        }
    }cout<<"."<<endl;
    mp.clear();
    m=-1;
    for(int i=0;i<ans.size();i++)
    {
        mp[ans[i][1]].push_back(names[i]);
        if(m<ans[i][1])
        {
            m=ans[i][1];
        }
    }
    cout<<"If you want to order a pizza, you should call: ";
    for(int i=0;i<mp[m].size();i++)
    {
        cout<<mp[m][i];
        if(i!=mp[m].size()-1)
        {
            cout<<", ";
        }
    }cout<<"."<<endl;
     mp.clear();
    m=-1;
    for(int i=0;i<ans.size();i++)
    {
        mp[ans[i][2]].push_back(names[i]);
        if(m<ans[i][2])
        {
            m=ans[i][2];
        }
    }
    cout<<"If you want to go to a cafe with a wonderful girl, you should call: ";
    for(int i=0;i<mp[m].size();i++)
    {
        cout<<mp[m][i];
        if(i!=mp[m].size()-1)
        {
            cout<<", ";
        }
    }cout<<"."<<endl;

    
    

return 0;
}