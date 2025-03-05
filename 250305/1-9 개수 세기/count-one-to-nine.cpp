#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[10] = {};
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr[num] += 1;
    }
    for (int i = 1; i < 10; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}