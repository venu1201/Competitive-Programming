#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n,m,k;
        cin>>n>>m>>k;
        vector<string> arr;
        for(int i=0;i<n;i++)
        {
            string str;
            cin>>str;
            arr.push_back(str);
        }
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m-1;j++)
            {   
                if(arr[i][j]!='.')
                {
                    int x=i,y=j,count=0,l=1;
                    while(1)
                    {
                        
                        if((arr[i-l][j-l]=='*' || arr[i-l][j-l]==97) && (arr[i-l][j+l]=='*' || arr[i-l][j+l]==97))
                        {
                            count++;
                        }
                        else
                        break;
                        l++;
                        if(i-l<0 || j+l<0)
                        break;
                    }
                    l=1;
                   
                    if(count>=k)
                    {
                        while(1)
                        {
                            if((arr[i-l][j-l]=='*' || arr[i-l][j-l]==97) && (arr[i-l][j+l]=='*' || arr[i-l][j+l]==97) )
                            {
                                arr[i-l][j-l]=97;
                                arr[i-l][j+l]=97;
                                arr[i][j]=97;
                            }
                            else
                            break;
                            l++;
                            if(i-l<0 || j+l<0)
                            break;
                    }
                    }
                }
            }
        }
        
        bool check=true;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(arr[i][j]=='*')
                {
                    check=false;
                }
            }
        }
        
        if(check==true)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}