#include <iostream>

using namespace std;

int N;
int a[1000];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    int range = N;
    while(true) {
        int max = 0;
        int maxIndex = 0;

        for (int i = 0; i < range; i++) {
            if(a[i] > max) {
                max = a[i];
                maxIndex = i+1;
            }
        }
        range = maxIndex - 1;
        cout << maxIndex << " ";
        if (maxIndex == 1) break;
    }

    return 0;
}
