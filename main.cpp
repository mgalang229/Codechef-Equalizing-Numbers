#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b;
        cin >> a >> b;
        cout << ((a - b) % 2 == 0 ? "Yes" : "No") << "\n";
    }
}
