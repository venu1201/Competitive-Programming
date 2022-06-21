#include<bits/stdc++.h>
using namespace std;
/*bool fun(int** arr,long long int x,long long int y,long long int n)
{
    if(x<n && y<n && arr[x][y]==1)
    {
        return true;
    }
    return false;
}
bool fff(int** arr,long long int x,long long int y,long long int n,int** a)
{
    if(x==n-1 && y==n-1)
    {
        a[x][y]=1;
        return true;
    }
    if(fun(arr,x,y,n))
    {
        a[x][y]=1;
        if(fff(arr,x+1,y,n,a))
        {
            return true;
        }
        if(fff(arr,x,y+1,n,a))
        {
            return true;
        }
        a[x][y]=0;
        return false;
    }
    return false;
}*/
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n;
        cin>>n;
        vector<vector<int>> arr;
        for(int i=0;i<n;i++)
        {
            vector<int> t;
            for(int j=0;j<n;j++)
            {
                t.push_back(0);
            }
            arr.push_back(t);
        }
        for(long long int i=0;i<n;i++)
        {
            long long int xx,yy;
            cin>>xx>>yy;
            arr[xx-1][yy-1]=1;
        }
        
        for(long long int i=0;i<n;i++)
        {
            for(long long int j=0;j<n;j++)
            {
                cout<<arr[i][j]<<" ";
            }cout<<endl;
        }
        /*if(fff(arr,0,0,n,a))
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    cout<<a[i][j]<<" ";
                }cout<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }*/


        
    }
    return 0;
}