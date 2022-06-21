#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
      
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int min=INT8_MAX;
        int max=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]<min)
            min=a[i];
            else if(a[i]-min>max)
            {
                max=a[i]-min;
            }
        }
        if(max==0)
        {
            cout<<"UNFIT"<<endl;
        }
        else
        cout<<max<<endl;
    }
    return 0;
}