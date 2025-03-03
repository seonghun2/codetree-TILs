#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num = n;
    int cnt = 0;
    for (int i = 1; i < n; i ++) {
        num /= i;
        cnt += 1;
        if (num <= 1) 
            break;
    }
    cout << cnt;

    return 0;
}