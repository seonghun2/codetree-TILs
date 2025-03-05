#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum = 0;
    double avg = 0;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (i % 2 == 1) sum += arr[i];
        if (i % 3 == 2) avg += arr[i];
    }

    cout << sum << " ";
    cout << fixed;
    cout.precision(1);
    cout << avg / 3;
    return 0;
}