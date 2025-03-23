#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    for (int i = 0; i < 10; i++) {
        string num;
        cin >> num;
        str += num;
    }
    for (int i = 0; i < str.length(); i++) {
        cout << str[i];
        if (i % 5 == 4) cout << endl;
    }
    
    return 0;
}