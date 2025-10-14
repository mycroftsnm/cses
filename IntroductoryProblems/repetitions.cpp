#include <bits/stdc++.h>

using namespace std;

int main() {
    string dna;
    cin >> dna;

    int longest = 1;
    int c = 1;

    for (int i=1; i < dna.size(); i++) {
        if (dna[i] == dna[i-1]) {
            c++; // XD
        } else {
            longest = max(longest, c);
            c = 1;
            if (longest > dna.size() - i) {
                break;
            }
        }
    }
    longest = max(longest, c);

    cout << longest << endl;
}
