#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    int arr[10];
    arr[0] = n1;
    arr[1] = n2;
    cout << arr[0] << " " << arr[1]  << " ";
    for (int i = 2; i < 10; i++) {
        arr[i] = (arr[i - 2] + arr[i - 1]) % 10;
        cout << arr[i] << " ";
    }
    return 0;
}