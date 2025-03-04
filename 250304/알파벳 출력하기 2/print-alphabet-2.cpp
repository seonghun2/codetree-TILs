#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num = 65;
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j++) {
            if ( j >= i) {
                cout << char(num) << " ";
                num += 1;
                if (num > 90) num = 65;
            }
            else {         
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}