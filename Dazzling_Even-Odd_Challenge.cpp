#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name1;
    string name2;
    string x="",y="";
    cin >> name1;
    cin >> name2;
    for(int i=0;i<name1.size();i++)
    {
        if(name1[i]>=97 && name1[i]<=122)
        {
            x+=name1[i];
        }
        if(name2[i]>=97 && name2[i]<=122)
        {
            y+=name2[i];
        }
    }
    name1=x;
    name2=y;
    

    int matrix[name1.size()+1][name2.size()+1];

    for (size_t i = 0; i < name1.length() + 1; i++)
        matrix[i][0] = i;
    for (size_t j = 0; j < name2.length() + 1; j++)
        matrix[0][j] = j;

    for (size_t i = 1; i <= name1.length(); i++)
    {
        for (size_t j = 1; j <= name2.length(); j++)
        {
            if (name1[i - 1] == name2[j - 1])
                matrix[i][j] = matrix[i - 1][j - 1];
            else
                matrix[i][j] = 1 + min(matrix[i - 1][j - 1], min(matrix[i][j - 1], matrix[i - 1][j]));
        }
    }

    cout << "The matrix:" << endl;
    cout << endl;
    cout << "     ";
    for (int i = 0; i < 11; i++)
    {
        cout << i << "    ";
    }
    cout << endl;
    cout << "  ";
    for (int i = 0; i < 57; i++)
    {
        cout << "-";
    }
    cout << endl;

    for (size_t i = 0; i <= name1.length(); i++)
    {
        cout << i << " |";
        for (size_t j = 0; j <= name2.length(); j++)
        {
            cout << "  " << matrix[i][j] << " :";
        }cout<<endl;
        cout << "  ";
        for (int i = 0; i < 57; i++)
        {
            cout << "-";
        }
        cout << endl;
    }

    cout << "The edit distance is :" << matrix[name1.length()][name2.length()] << endl;

    return 0;
}