#include<bits/stdc++.h>
#define int long long int
using namespace std;
struct pizza{
    int n,m;
    vector<string> likes,dislikes;
    void like()
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            string str;
            cin>>str;
            likes.push_back(str);
        }
    }
    void displike()
    {
        cin>>m;
        for(int i=0;i<m;i++)
        {
            string str;
            cin>>str;
            dislikes.push_back(str);
        }
    }
};
bool comp(pizza a,pizza b)
{
    return a.m<b.m;
}
int32_t main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
     freopen("prachashcodein.txt","r",stdin);
    freopen("prackhashcodeout.txt","w",stdout);
    int n;
    cin>>n;
    pizza arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i].like();
        arr[i].displike();
    }
    unordered_set <string> st;
    for(auto it:arr)
    {
       
        for(auto x:it.likes)
        {
            st.insert(x);
        }
        
        for(auto x:it.dislikes)
        {
            st.insert(x);
        }
    }
    vector<string> ans;
    for(auto it:st)
    {
        ans.push_back(it);
    }
    sort(ans.begin(),ans.end());
    sort(arr,arr+n,comp);
    for(auto it:arr)
    {
        int check=0;
        for(auto x:it.likes)
        {
            if(count(ans.begin(),ans.end(),x)==0)
            {
                check=1;
                break;
            }
        }
        if(check==0)
        {
            for(auto x:it.dislikes)
            {
                auto ch=find(ans.begin(),ans.end(),x);
                if(ch!=ans.end())
                {
                    int y=ch-ans.begin();
                    ans.erase(ans.begin()+y);
                }
            }
        }
    }
    cout<<ans.size()<<" ";
    for(auto it:ans)
    {
        cout<<it<<" ";
    }cout<<endl;
return 0;
}