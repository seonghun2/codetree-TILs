#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    while (n != 1) {
        n /= 2;
        cnt += 1;
    }

    cout << cnt;
    return 0;
}