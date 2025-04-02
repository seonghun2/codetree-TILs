#include <iostream>

using namespace std;

string A, B;

int main() {
    cin >> A;
    cin >> B;
    string ans = A;
    
    while (true) {
        bool find = false;
        if(ans.length() < B.length()) break;
        for (int i = 0; i < ans.length() - B.length() + 1; i++) {
            if (ans.substr(i, B.length()) == B) {
                ans = ans.erase(i, B.length());
                find = true;
                break;
            }
        }
        if (find == false ) break;
    }

    cout << ans;
    return 0;
}
