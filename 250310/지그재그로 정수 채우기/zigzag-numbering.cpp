#include <iostream>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;
    int arr[n][m];

    int x = 0, y = 0;
    int num = 0;

    while (num < n*m) {
        arr[x][y] = num;
        
        if (y % 2 == 0) {
            if (x == n - 1) y += 1;
            else x += 1;
        }
        else {
            if (x == 0) y += 1;
            else x -= 1;
        }
        
        num += 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
