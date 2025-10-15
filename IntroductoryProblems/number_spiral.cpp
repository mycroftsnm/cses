#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int i=0; i < t; i++) {
        long long x, y;
        long long rta;
        cin >> y >> x;

        if (x > y) {
            rta = (x * x) - x + 1;
            if (x & 1) {
                rta += x - y;
            } else {
                rta -= x - y;
            }
        } else {
            rta = (y * y) - y + 1;
            if (y & 1) {
                rta -= y - x;
            } else {
                rta += y - x;
            }
        }
        cout << rta << endl;
    }
}