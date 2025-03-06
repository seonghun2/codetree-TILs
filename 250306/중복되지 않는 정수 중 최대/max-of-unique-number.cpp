#include <iostream>

using namespace std;

int N;
int nums[1000];
int num[1001] = {};
int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
        num[nums[i]] += 1;
    }

    int max = -1;

    for (int i = 0; i < N; i++) {
        if (nums[i] >= max && num[nums[i]] <= 1) max = nums[i];
    }

    cout << max;

    return 0;
}
