#include<iostream>
using namespace std;

int main() {
    int x, y = 0, z = 1, p = 0;

    cout << "Enter a number : ,";
    cin >>x;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= x; ++i) {

        if(i == 1) {
            cout << y << ", ";
            continue;
        }
        if(i == 2) {
            cout << z << ", ";
            continue;
        }
        p = y + z;
        y = z;
        z = p;

        cout << p << ", ";
    }
    return 0;
}
