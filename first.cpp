#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    map<vector<int>,int> arr;
    int n;
    cin>>n;
    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    
        arr[v]=1;
        
    
    for(auto i:arr)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
return 0;
    
}