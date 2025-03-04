#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int startNum = 2;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << startNum << " ";
            startNum += 2;
            if (startNum > 8) startNum = 2;
        }
        cout << endl;
    }
    return 0;
}