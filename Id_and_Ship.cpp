#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        char x;
        cin>>x;
        if(x=='B' || x=='b')
        cout<<"BattleShip"<<endl;
        else if(x=='C'||x=='c')
        cout<<"Cruiser"<<endl;
        else
        if(x=='D' || x=='d')
        cout<<"Destroyer"<<endl;
        else
        {
            cout<<"Frigate"<<endl;
        }
    }
    return 0;
}