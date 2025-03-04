#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int startNum = 11;
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j ++) {
            cout << startNum + (2*i) + (2*j) << " ";
        }
        cout << endl;
    }
    return 0;
}