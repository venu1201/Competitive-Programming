#include<bits/stdc++.h>
using namespace std;
bool check(int x, int y)
{
    
    int res1 = log(y) / log(x);
    double res2 = log(y) / log(x); 

    return (res1 == res2);
}
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n,l,r,index,sum,min,sum2;    
        cin>>n>>l>>r;        
        if(n>=l&&n<=r)
        {
            cout<<n<<endl;
            continue;
        }
        
        if (n<l)
        {
            cout <<l<< endl;
            continue;
        }
    
        sum2 = INT_MAX;
        min = 0;
       
        while (l<r&& n/r< r)
        {
            int t1 = n / r, t2 = n % r;
            if (sum2 > t1 + t2)
            {
                sum2 = t1 + t2;
                min = r;
            }
            
            r = n / (t1 + 1);
        }
        while (l<=r)
        {
            index = n;
            sum = 0;
            while(1)
            {
                if (index<l)
                {
                    sum += index;
                    if (sum < sum2) {
                        min = l;
                        sum2 = sum;
                    }
                    break;
                }
                sum += index % l;
                index/=l;
                if (sum >= sum2)
                {
                    break;
                }
            }
            l++;
        }
       cout << min << endl;
    }
    return 0;
    }
    

        
    
