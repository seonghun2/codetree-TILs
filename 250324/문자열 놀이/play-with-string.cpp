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
        string tmpString = str;
        if (type == 1) {
            cin >> a >> b;
            char tmp = tmpString[a-1];
            tmpString[a-1] = tmpString[b-1];
            tmpString[b-1] = tmp;
            cout << tmpString << endl;
        }
        else if (type == 2) {
            cin >> x >> y;
            for(int i = 0; i < tmpString.length(); i ++) {
                if(tmpString[i] == x) tmpString[i] = y;
            }
            cout << tmpString << endl;
        }    
    }
    return 0;
}