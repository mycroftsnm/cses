#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007

int main() {
    long long n;
    long long rta = 1; 
    cin >> n;
    while (n--) {
        rta *= 2;
        rta %= 1000000007;    
    }
    cout << rta << endl;
    return 0;
}
