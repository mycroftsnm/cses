#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long rta = 0;
    for (long long d = 5; d <= n; d *= 5) {
        rta += n/d;
    }
    cout << rta << endl;
    return 0;
}
