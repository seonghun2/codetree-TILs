#include <iostream>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < Q; i++) {
        int type;
        cin >> type;
        if (type == 1) {
            int a;
            cin >> a;
            cout << arr[a-1] << endl;
        }
        else if (type == 2) {
            int b;
            cin >> b;
            int index = 0;
            for (int i = 0; i < N; i++) {
                if (arr[i] == b) {
                    index = i+1;
                    break;
                }
            }   
            cout << index << endl;
        }
        else {
            int s, e;
            cin >> s >> e;
            for (int i = s-1; i < e; i++) {
                cout << arr[i] << " ";
            } 
        }

    }
    return 0;
}