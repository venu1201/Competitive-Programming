#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
    long long int n,k;
    cin>>n>>k;
    string str;
    cin>>str;

    char first = str[0];
    int count =0;
    for(long long int i=1;i<n;i++) {
        if(first != str[i])
         {
            count++;
            first = str[i];
        }
    }
    bool check=0;
    if(count<k) 
    {
        cout<<-1<<"\n";
        continue;
    }
    if(str[0]=='0') {
        if(k%2) {
            for(int i=str.size()-1; i>=0; i--)
             {
                if(str[i] == '1') {
                    cout<<i+1<<"\n";
                   check=1;
                   break;
                }
            }
            if(check==1)
            continue;
        }
        else
        {
            for(int i=str.size()-1; i>=0; i--) {
                if(str[i] == '0') 
                {
                    cout<<i+1<<"\n";
                    check=1;
                    break;
                }
            }
             if(check==1)
            continue;
        }
    }
    else {
        if(k%2) {
            for(int i=str.size()-1; i>=0; i--) {
                if(str[i] == '0') {
                    cout<<i+1<<"\n";
                    check=1;
                    break;
                }
            }
             if(check==1)
            continue;
        }
        else {
            for(int i=str.size()-1; i>=0; i--) {
                if(str[i] == '1') {
                    cout<<i+1<<"\n";
                   check=1;
                   break;
                }
            }
             if(check==1)
            continue;
        }
    }
    }
}