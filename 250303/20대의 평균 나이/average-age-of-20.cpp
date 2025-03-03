#include <iostream>
using namespace std;

int main() {
    double sum = 0;
    int cnt = 0;
    while (true) {
        int n;
        cin >> n;
        if (n >= 20 && n <= 29) {
            sum += n;
            cnt += 1;
        }
        else
            break;
    }
    cout << fixed;
    cout.precision(2);

    cout << sum / cnt;
    
    return 0;
}