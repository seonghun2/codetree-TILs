#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    for (int i = 1; i <= 9; i ++) {
        for (int j = B; j >= A; j -= 2) {
            cout << j << " * " << i << " = " << j * i;
            if (j != A) cout << " / ";
        }
        cout << endl;
    }
    return 0;
}