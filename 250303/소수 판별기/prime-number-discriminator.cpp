#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool isPrimeNum = true;

    for (int i = 2; i < n/2; i++) {
        if (n % i == 0) {
            isPrimeNum = false;
            break;
        }
    }
    if (isPrimeNum)
        cout << "P";
    else
        cout << "C";

    return 0;
}