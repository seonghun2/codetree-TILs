#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            for (int j = 0; j < n; j++) {
                cout << "* ";
            }
        }
        else {
            for (int j = 0; j < n; j++) {
                if (j < i) {
                    cout << "  ";
                }
                else {
                    if (j % 2 == 1) {
                        cout << "* ";
                    }
                    else {
                        cout << "  ";
                    }
                }
            }
        }
        cout << endl;
    }

    return 0;
}