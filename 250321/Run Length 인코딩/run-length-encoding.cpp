#include <iostream>
#include <string>

using namespace std;

string A;

int main() {
    cin >> A;
    char alphabet;
    int n = 0;
    string ans = "";
    for(int i = 0; i < A.length(); i++) {
        if (A[i] == alphabet) {
            n += 1;
        }
        else {
            if (n != 0)ans += to_string(n);
            n = 1;
            ans += A[i];
            alphabet = A[i];
        }
    }
    ans += to_string(n);
    cout << ans.length() << endl << ans;
    return 0;
}
