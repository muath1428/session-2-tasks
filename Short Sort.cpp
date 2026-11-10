
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++) {
        int c = 0;
        cin >> s;
        if (s[0] != 'a')
            c++;
        if (s[1] != 'b')
            c++;
        if (s[2] != 'c')
            c++;
        if (c < 3)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
}