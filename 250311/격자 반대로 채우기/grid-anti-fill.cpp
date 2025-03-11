#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n][n];

    int num = 1;
    int x = n-1, y = n-1;
    bool isUp = true;

    while (num <= n * n) {
        arr[x][y] = num;
        if (isUp) {
            if (x == 0) {
                y -= 1;
                isUp = false;
            }
            else x -= 1;
        } 
        else {
            if (x == n - 1) {
                y -= 1;
                isUp = true;
            }
            else x += 1;
        }
        num += 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}