#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int max = 0;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        if (max <= arr[i]) max = arr[i];
    }
    cout << max;
    return 0;
}