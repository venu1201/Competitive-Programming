#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n,k;
        cin>>n>>k;
        long long int test=n,res=-1,check=0;
        vector<long long int> arr;
        if(test==0)
        {
            arr.push_back(0);
        }
        while(test!=0)
        {
            res=test%10;
            arr.push_back(res);
            test=test/10;
        }
        for(int i=arr.size()-1;i>=0;i--)
        {
            if(arr[i]==k)
            {
                check=1;
                res=i;
                
                break;
            }
            
        }
        test=0;
        if(check==0)
        {
            cout<<"0"<<endl;
            continue;
        }
        else
        {
            if(k==0)
            {
                for(int i=arr.size()-1;i>=0;i--)
                {
                    if(res>=i)
                    {
                        arr[i]=1;
                    }
                    long long int l=1;
                    for(int j=i;j>0;j--)
                    {
                        l=l*10;
                    }
                    test+=arr[i]*l;
                }
                cout<<test-n<<endl;
            }
            else
            {
                for(int i=arr.size()-1;i>=0;i--)
                {
                    if(res==i)
                    {
                        arr[i]++;
                    }
                    if(res>i)
                    {
                        arr[i]=0;
                    }
                    long long int l=1;
                    for(int j=i;j>0;j--)
                    {
                        l=l*10;
                    }
                    test+=arr[i]*l;
                }
                cout<<test-n<<endl;
            }
        }


    }
    return 0;
}