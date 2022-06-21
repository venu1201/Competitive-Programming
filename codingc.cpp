#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> > v;
int i=0;
struct st
{
    int id;
    string name;
    int rank;
};
void enter(struct st *arr,int* i)
{
    int id;
    string name;
    int rank;
    cin>>id>>name>>rank;
    arr[*i].id=id;
    arr[*i].name=name;
    arr[*i].rank=rank;
    v.push_back(make_pair(rank,*i));
    *i++;
}
void print(struct st *arr)
{
    if(v.size()==0)
    {
        cout
    }
    sort(v.begin(),v.end());
    
    return;
}
int main()
{
    st arr[1000];
    
    while(1)
    {
        char ch;
        cin>>ch;
        if(ch=='t')
        {
            break;
        }
        switch (ch)
        {
        case 'e':
            enter(arr,&i);
            
            break;
        case 'i':
            print(arr);
            break;
        default:
            break;
        }
    }
}