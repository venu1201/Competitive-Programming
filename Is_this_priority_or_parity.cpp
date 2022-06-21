#include <bits/stdc++.h>

using namespace std;
int main()
{
    char a, b;
    cout << "Enter 1st character: ";
    cin >> a;
    while (1)
    {

        cout << "Enter 2nd character: ";
        cin >> b;
        if (a == b)
        {
            cout <<"Number is found"<< endl;
            break;
        }
        else if (a > b)
        {
            cout << " 1st number is greater than 2nd number" << endl;
        }
        else
        {
            cout  << "1st number is lesser than 2nd number"  << endl;
        }
    }
    return 0;
}