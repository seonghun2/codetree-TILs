#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0 ; i < n; i++) {
        for (int j = 0 ; j < n; j++) {
            if (i % 2 == 0) {
                cout << (i * n) + 1 + j << " ";
            }
            else {
                cout << (i + 1) * n - j << " ";
            }
        }
        cout << endl;
    }
    return 0;
}