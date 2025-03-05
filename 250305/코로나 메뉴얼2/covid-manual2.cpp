#include <iostream>
using namespace std;

int main() {
    int arr[4] = {};
    for (int i = 0; i < 3; i++) {
        char yn;
        int temp;
        cin >> yn >> temp;
        if (yn == 'Y' && temp >= 37) 
            arr[0] += 1;
        else if (yn == 'N' && temp >= 37) 
            arr[1] += 1;
        else if (yn == 'Y' && temp < 37) 
            arr[2] += 1;
        else
            arr[3] += 1;
    }

    for (int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }
    if (arr[0] >= 2) cout << "E";
    return 0;
}