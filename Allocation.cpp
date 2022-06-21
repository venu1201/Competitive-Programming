#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int T;
	cin>>T;
	while(T--)
	{
	    string str;
	    cin>>str;
	    int count=0;
	    
	    for(int i=0;i<str.length();i++)
	    {
	        for(int j=i+1;j<str.length();j+=2)
	        {
	            int x=(j+1)/2,left=0,right=0;
	            for(int k=i;k<i+x;k++)
	            {
	                left+=(str[k]-48);
	            }
	            for(int k=j;k>j-x;j--)
	            {
	                right+=(str[k]-48);
	            }
	            if(left==right)
	            {
	                if(x>count)
	                {
	                    count=x;
	                }
	            }
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}