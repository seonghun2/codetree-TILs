#include <iostream>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;

    int arr[n][m] = {};
    int num = 1;
    int x = 0, y = 0;

    while (num <= n * m) {
        arr[x][y] = num;
        if (y == 0 || x == n-1) {
            bool isBreak = false;
            for (int i = 0; i < n; i++){
                for (int j = 0; j < m; j++) {
                    if (arr[i][j] == 0) {
                        x = i;
                        y = j;
                        isBreak = true;
                        break;
                    }
                }
                if (isBreak) break;
            }
        }
        else {
            x += 1;
            y -= 1;
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
