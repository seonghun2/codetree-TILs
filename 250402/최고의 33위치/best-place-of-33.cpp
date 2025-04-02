#include <iostream>

using namespace std;

int N;
int grid[20][20];

int main() {
    int ans = 0;
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> grid[i][j];
        }
    }

    for (int i = 0; i < N-2; i++) {
        for (int j = 0; j < N-2; j++) {
            int sum = 0;
            for(int k = 0; k < 3; k++) {
                for(int l = 0; l < 3; l++) {
                    sum += grid[i+k][j+l];
                }    
            }
            if (sum > ans) ans = sum;
        }
    }
    cout << ans;
    return 0;
}
