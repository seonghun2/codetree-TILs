#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    int a[n1];
    int b[n2];
    for (int i = 0; i < n1; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n2; i++) {
        cin >> b[i];
    }

    bool ans;
    for (int i = 0; i < n1 - n2 + 1; i++) {
        ans = true;
        for (int j = i; j < i + n2; j++) {
            if (a[j] != b[j-i]) {
                ans = false;
                break;
            }
        }
        if (ans == true) break;
    }
    if (ans) cout << "Yes";
    else cout << "No";

    return 0;
}