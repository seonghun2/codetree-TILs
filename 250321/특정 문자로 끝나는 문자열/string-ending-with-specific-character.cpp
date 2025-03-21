#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr[10];
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    char chr;
    cin >> chr;
    int cnt = 0;
    for (int i = 0; i < 10; i++) {
        int len = arr[i].length();
        if (arr[i][len-1] == chr) {
            cout << arr[i] << endl;
            cnt += 1;
        }
    }
    if (cnt == 0) cout << "None";
    
    return 0;
}