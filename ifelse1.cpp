#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << " Enter  any number ";
    cin >> age;

    if (age >= 18)
    {
        cout << " you are eligible for vote \n";
    }

    else
    {
        cout << " you are  not eligible for vote \n";
    }
    return 0;
}