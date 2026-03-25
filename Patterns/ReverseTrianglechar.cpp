#include<iostream>
using namespace std;

int main(){
    int n = 4;

    for(int i = 0; i < n; i++){
        char ch = 'A' + i;   // har row ka starting char

        for(int j = 0; j <= i; j++){
            cout << ch << " ";
            ch--;   // reverse ja rahe hain
        }
        cout << endl;
    }

    return 0;
}