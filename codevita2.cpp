#include <bits/stdc++.h>
using namespace std;
int k = 0;
void fun(int i, int x, vector<int> &arr)
{
    if(x>90 || x<-90)
    {
        return;
    }
    if (i == (int)arr.size())
    {
        return;
    }
    if(k==1)
    {
        return;
    }
    if (x == 0)
    {
        k = 1;
        return;
    }
    
    fun(i + 1, x + arr[i], arr);
    fun(i + 1, x - arr[i], arr);
    fun(i + 1, x, arr);
}
int main()
{
    int n;
    cin >> n;
    int pos;
    cin >> pos;
    string dir;
    cin >> dir;
    vector<int> arr(n);
    vector<vector<int>> a;
    vector<int> t;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (dir == "Right")
    {
        pos = pos;
    }
    else
    {
        pos = -pos;
    }
    
    
        fun(0, pos, arr);
        if (k == 1)
        {
            cout << "Possible";
        }
        else
        {
            cout << "Not Possible";
        }
    
    
    return 0;
}