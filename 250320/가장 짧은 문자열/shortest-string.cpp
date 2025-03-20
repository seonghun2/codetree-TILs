#include <iostream>
#include <string>
using namespace std;

int main() {
    int min = 20;
    int max = 0;
    for (int i = 0; i < 3; i++) {
        string str;
        cin >> str;
        int len = str.length();
        if (len > max) max = len;
        if (len < min) min = len;
    }
    cout << max - min;
    return 0;
}