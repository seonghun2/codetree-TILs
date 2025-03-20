#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    char str;
    cin >> str;
    int cnt = 0;
    for (int i = 0; i < 5; i++) {
        if (arr[i][2] == str || arr[i][3] == str){
            cnt += 1;
            cout << arr[i] << endl;
        }
    }
    cout << cnt;
    return 0;
}