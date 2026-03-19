#include <iostream>
using namespace std;
int main()
{

    int n;
    bool isPrime = true;
    cout << " Enter any number" << endl;
    cin >> n;

    if (n <= 1)
    {
        isPrime = false;
    }

    for (int i = 2; i *i <=n; i++)     /// i <= n - 1;
    {

        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime == true)
    {
        cout << " Is a Prime number \n";
    }
    else
    {
        cout << " Is not a Prime number \n";
    }
    return 0;
}