#include <bits/stdc++.h>
using namespace std;
struct str
{
    string name;
    pair<int, int> head;
    pair<int, int> tail;
    int h,t;
};
int main()
{
    int n, m;
    cin >> n >> m;
    str snakes[m];
    for (int i = 0; i < m; i++)
    {
        string s, a, b;
        cin >> s >> a >> b;
        vector<int> v;
        stringstream ss(a);
        for (int i; ss >> i;)
        {
            v.push_back(i);
            if (ss.peek() == ',')
                ss.ignore();
        }
        snakes[i].name = s;
        snakes[i].head = make_pair(v[0] - 1, v[1] - 1);
        vector<int> vv;
        stringstream sss(b);
        for (int i; sss >> i;)
        {
            vv.push_back(i);
            if (sss.peek() == ',')
                sss.ignore();
        }
        snakes[i].tail = make_pair(vv[0] - 1, vv[1] - 1);
        if(snakes[i].head.first==snakes[i].tail.first)
        {
            if(snakes[i].head.second<=snakes[i].tail.second)
            {
                snakes[i].t=1;
                snakes[i].h=0;
            }
            else
            {
                snakes[i].t=0;
                snakes[i].h=1;
            }
        }
        else
        {
            if(snakes[i].head.first<=snakes[i].tail.first)
            {
                snakes[i].t=1;
                snakes[i].h=0;
            }
            else
            {
                snakes[i].t=0;
                snakes[i].h=1;
            }
        }
    }
    
    string pos;
    cin >> pos;
    int x, y;
    if (pos[0] == 'N')
    {
        x = 0;
        y = (pos[1] - '0') - 1;
    }
    else if (pos[0] == 'W')
    {
        y = 0;
        x = (pos[1] - '0') - 1;
    }
    else if (pos[0] == 'S')
    {
        x = n - 1;
        y = (pos[1] - '0') - 1;
    }
    else
    {
        y = n - 1;
        x = (pos[1] - '0') - 1;
    }
    int f=0;
    
    while (1)
    {
       
        int ch = 0;
        for (int i = 0; i < m; i++)
        {
            if (snakes[i].head.first == snakes[i].tail.first && x == snakes[i].head.first)
            {
                if (((y >= snakes[i].head.second && y <= snakes[i].tail.second) && (snakes[i].head.second<=snakes[i].tail.second)) || ((y <= snakes[i].head.second && y >= snakes[i].tail.second) && (snakes[i].head.second>=snakes[i].tail.second)) )
                {
                    ch = 1;
                    cout<<snakes[i].name<<" "<<x+1<<","<<y+1<<endl;
                    break;
                }
            }
            else if (snakes[i].head.second == snakes[i].tail.second && y == snakes[i].head.second)
            {
                if (((x >= snakes[i].head.first && x <= snakes[i].tail.first) && (snakes[i].head.first<=snakes[i].tail.first)) || ( (x <= snakes[i].head.first && x >= snakes[i].tail.first) && (snakes[i].head.first>=snakes[i].tail.first) ))
                {
                    ch = 1;
                    cout<<snakes[i].name<<" "<<x+1<<","<<y+1<<endl;
                    break;
                }
            }
        }
        

        if (ch == 1)
        {
            f=1;
            break;
        }
        for (int i = 0; i < m; i++)
        {
            if (snakes[i].head.first == snakes[i].tail.first)
            {
                if (snakes[i].h <= snakes[i].t)
                {
                    snakes[i].head.second--;
                    snakes[i].tail.second--;
                    if (snakes[i].head.second == -1)
                        snakes[i].head.second = n - 1;
                    if (snakes[i].tail.second == -1)
                        snakes[i].tail.second = n - 1;
                }
                else
                {
                    snakes[i].head.second++;
                    snakes[i].tail.second++;
                    if (snakes[i].head.second == n)
                        snakes[i].head.second = 0;
                    if (snakes[i].tail.second == n)
                        snakes[i].tail.second = 0;
                }
            }
            else if (snakes[i].head.second == snakes[i].tail.second)
            {
                if (snakes[i].h <= snakes[i].t)
                {
                    snakes[i].head.first--;
                    snakes[i].tail.first--;
                    if (snakes[i].head.first == -1)
                        snakes[i].head.first = n - 1;
                    if (snakes[i].tail.first == -1)
                        snakes[i].tail.first = n - 1;
                }
                else
                {
                    snakes[i].head.first++;
                    snakes[i].tail.first++;
                    if (snakes[i].head.first == n)
                        snakes[i].head.first = 0;
                    if (snakes[i].tail.first == n)
                        snakes[i].tail.first = 0;
                }
            }
        }
        
        if (pos[0] == 'N')
        {
            x++;
            if(x==n-1)
            {
                break;
            }
            
        }
        else if (pos[0] == 'W')
        {
            y++;
            if(y==n-1)
            {
                break;
            }
           
        }
        else if (pos[0] == 'S')
        {
            x--;
            if(x==0)
            {
                break;
            }
            
        }
        else
        {
            y--;
            if(y==0)
            {
                break;
            }
           
        }
        
    }
    if(f==0)
    {
        cout<<"NIRVANA"<<endl;
    }

    return 0;
}