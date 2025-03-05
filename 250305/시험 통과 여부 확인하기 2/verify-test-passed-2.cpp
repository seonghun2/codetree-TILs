#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string arr[n];
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int s1, s2, s3, s4;
        cin >> s1 >> s2 >> s3 >> s4;
        if (s1 + s2 + s3 + s4 >= 240){
            arr[i] = "pass";
            cnt += 1;
        }
        else
            arr[i] = "fail";
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    cout << cnt;
    return 0;
}