#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        string str;
        cin>>str;
        string word;
        cin>>word;
        vector<long long int> arr;
        for(long long int i=0;i<word.size();i++)
        {
            auto it=find(str.begin(),str.end(),word[i]);
            int pos=it-str.begin();
            arr.push_back(pos);
        }
        long long int sum=0;
        for(long long int i=0;i<arr.size()-1;i++)
        {
            sum+=abs(arr[i]-arr[i+1]);
        }
        cout<<sum<<endl;
    }
}