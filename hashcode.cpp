#include<bits/stdc++.h>
#define int long long int
using namespace std;
struct project{
    string proname;
    int days;
    int score;
    int best;
    int ct;
    vector<pair<string,int>> reqskill;
    void read()
    {
        cin>>proname>>days>>score>>best>>ct;
    }
    void reqskil(){
        for(int i=0;i<ct;i++)   
        {
            string s;
            int l;
            cin>>s>>l;
            reqskill.push_back(make_pair(s,l));
        }
    }
};
struct candidates{
    string name;
    int cn;
    vector<pair<string,int>> skill;
    void read()
    {
        cin>>name>>cn;
        
    }
    void readskills(){
        for(int i=0;i<cn;i++)
        {
            string s;
            int l;
            cin>>s>>l;
            skill.push_back(make_pair(s,l));
        }
    }
};
bool comp(project a,project b)
{
    return a.days<b.days;
}
int32_t main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    freopen("hashcodein.txt","r",stdin);
    freopen("hashcodeout.txt","w",stdout);

    int n,m;
    cin>>n>>m;
    candidates x[n];
    project y[m];
    map<string,vector<pair<string,int>>> sk;
    for(int i=0;i<n;i++)
    {
        x[i].read();
        x[i].readskills();
        for(int j=0;j<x[i].cn;j++)
        {
            sk[x[i].skill[j].first].push_back(make_pair(x[i].name,x[i].skill[j].second));
        }
    }
    
    for(int i=0;i<m;i++)
    {
        y[i].read();
        y[i].reqskil();
    }
    sort(y,y+m,comp);
    vector<int> vis(m,0);
    map<string,vector<string>> ans;
    int cnt=0,run=0,q=1;
    int mc=999999;
    while(1)
    {
        if(vis[cnt]==0)
        {
            int check=0;
            for(int i=0;i<y[cnt].ct;i++)
            {
                string s=y[cnt].reqskill[i].first;
                int level=y[cnt].reqskill[i].second;
                int flag=1;
               
                for(auto it:sk[s])
                {
                   
                    if(it.second>=level && count(ans[y[cnt].proname].begin(),ans[y[cnt].proname].end(),it.first)==0)
                    {
                        
                        ans[y[cnt].proname].push_back(it.first);
                       
                        flag=0;
                        break;
                    }
                }
                if(flag==1)
                {
                    check=1;
                    ans[y[cnt].proname]={};
                    break;
                }
                
            }
            if(check==0)
            {
                for(int i=0;i<y[cnt].ct;i++)
                {
                    string nam=ans[y[cnt].proname][i];
                    string snam=y[cnt].reqskill[i].first;
                    for(int j=0;j<n;j++)
                    {
                        if(x[j].name==nam)
                        {
                            for(auto &it:sk[snam])
                            {
                                if(it.first==x[j].name)
                                {
                                    if(it.second<=y[cnt].reqskill[i].second)
                                    {
                                        it.second++;
                                    }
                                }
                            }
                            for(int k=0;k<x[j].cn;k++)
                            {
                                
                                if(x[j].skill[k].first==snam)
                                {
                                    if(x[j].skill[k].second<=y[cnt].reqskill[i].second)
                                    {
                                        
                                        x[j].skill[k].second++;
                                    }
                                }
                            }
                        }
                    }
                }
                vis[cnt]=q;
                q++;
            }
        }
        if(cnt==0)
        {
            int ccc=count(vis.begin(),vis.end(),0);
            mc=min(mc,ccc);
        }
        cnt++;
        
        if(cnt==m)
        {
            if(mc==count(vis.begin(),vis.end(),0))
            {
                break;
            }
            cnt=0;
        }
     
        
    }
    int countans=m-count(vis.begin(),vis.end(),0);
    cout<<countans<<endl;
    
    vector<pair<string,vector<string>>> ans1(ans.size());
    cnt=0;
    int xx=countans+1;
  
    for(auto &it:vis)
    {
        if(it==0)
        {
            it=xx;
            xx++;
        }
        
    }
    
    
    for(int i=0;i<vis.size();i++)
    {
        
        ans1[vis[i]-1].first=y[cnt].proname;
        for(auto it:ans[y[cnt].proname])
        {
            ans1[vis[i]-1].second.push_back(it);
        }
        cnt++;  
          
    }
    int g=0;
    for(auto it:ans1)
    {
        if(it.second.size()==0)
        {
            g++;
            continue;
        }
        cout<<it.first<<endl;
        for(auto x:it.second)
        {
            cout<<x<<" ";
        }cout<<endl;
    }
    
    
    
    
    
return 0;
}