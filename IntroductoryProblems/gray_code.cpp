#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < (1<<n); i++) {
        int gray_number = i ^ (i>>1);

        // print binary string
        for (int i = 1; i <= n; i++) {
            int bit = (gray_number >> (n-i)) & 1;
            cout << bit;
        }
        cout << endl;
    }
    return 0;
}
