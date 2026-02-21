#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << " Enter character";
    cin >> ch;
    if (ch >= 65 && ch <= 90)
    {
        cout << " Upper case \n";
    }

    else 
    {
        cout << " Lower case \n";
    }
    return 0;
    
}