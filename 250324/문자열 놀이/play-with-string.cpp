#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int Q;
    cin >> str;
    cin >> Q;
    int type;
    int a, b;
    char x, y;

    for (int i = 0; i < Q; i++) {
        cin >> type;
        if (type == 1) {
            cin >> a >> b;
            char tmp = str[a-1];
            str[a-1] = str[b-1];
            str[b-1] = tmp;
            cout << str << endl;
        }
        else if (type == 2) {
            cin >> x >> y;
            for(int i = 0; i < str.length(); i ++) {
                if(str[i] == x) str[i] = y;
            }
            cout << str << endl;
        }    
    }
    return 0;
}