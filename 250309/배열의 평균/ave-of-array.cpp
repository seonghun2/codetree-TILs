#include <iostream>
using namespace std;

int main() {
    int arr[2][4];
    cout << fixed;
    cout.precision(1);

    for (int i = 0; i < 2; i++) {
        double sum = 0;
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
            sum += arr[i][j];
        }
        cout << sum / 4 << " ";
    }
    cout << endl;

    double sum1, sum2, sum3, sum4;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            if (j == 0) sum1 += arr[i][j];
            if (j == 1) sum2 += arr[i][j];
            if (j == 2) sum3 += arr[i][j];
            if (j == 3) sum4 += arr[i][j];
        }
    }
    cout << sum1/2 << " " << sum2/2 << " " << sum3/2 << " " << sum4/2 << endl;

    cout << (sum1 + sum2 + sum3 + sum4) / 8;

    return 0;
}