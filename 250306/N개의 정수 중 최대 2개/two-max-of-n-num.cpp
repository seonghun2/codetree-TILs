#include <iostream>

using namespace std;

int N;
int A[100];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int max1 = 0, max2 = 0;
    int maxIndex;
    for (int i = 0; i < N; i++) {
        if (A[i] >= max1){
             max1 = A[i];
             maxIndex = i;
        }
    }

    for (int i = 0; i < N; i++) {
        if (A[i] >= max2 && i != maxIndex) max2 = A[i];
    }

    cout << max1 << " " << max2;
    return 0;
}
