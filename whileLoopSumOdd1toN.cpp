#include <iostream>
using namespace std;
int main()
{
    int n = 5, i = 1;
    int oddSum = 0;

    while (i <= n)
    {

        if (i % 2 != 0)
        {
            oddSum += i;
        }
        i++;
    }
    cout << " odd sum = " << oddSum << endl;
    return 0;
}