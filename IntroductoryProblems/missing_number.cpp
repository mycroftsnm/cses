#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long s = 0;
    
    for (int i=1; i < n; i++) {
        int t;
        cin >> t;
        s += t;
    }

    long long sn;
    sn = n * (n+1) / 2;

    cout << sn - s << endl;
}
