#include <iostream>
using namespace std;
int main()
{

    int i = 1 , sum = 0;
    int n = 5; 
    cout << " Enter a number : " << endl;
    cin >> n;
    while (i <= n)
    {
        sum += i;

        i++;
    }
    cout << sum << endl;
    return 0;
}