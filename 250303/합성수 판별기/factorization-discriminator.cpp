#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool isComposeNum = false;
    for (int i = 2; i <= n-1; i++) {
        if (n % i == 0) {
            isComposeNum = true;
            break;
        }
    }

    if (isComposeNum)
        cout << "C";
    else
        cout << "N";

    return 0;
}