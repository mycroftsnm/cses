#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    long long maxx;
    cin >> n;
    cin >> maxx;

    long long rta = 0;

    for (int i=1; i < n; i++) {
        long long x;
        cin >> x;

        if (x < maxx) {
            rta += (maxx - x);
        } else {
            maxx = x;
        }
    }

    cout << rta << endl;
}
