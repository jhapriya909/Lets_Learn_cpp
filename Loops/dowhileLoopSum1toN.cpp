#include <iostream>
using namespace std;
int main()
{

    int n = 10 , sum = 0;
    int i = 1;

    do
    {
        cout << i << " ";
        sum += i;
        i++;
       
    }

    while (i <= n);
    cout << " sum = " << sum;
    cout << endl;

    return 0;
}