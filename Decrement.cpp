#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = a--; // kaam, update

    cout << " b  = " << b << endl; //9
    cout << " a  = " << a << endl; //9
    return 0;
}
