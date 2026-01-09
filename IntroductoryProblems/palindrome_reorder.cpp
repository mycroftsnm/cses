#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    map <char, int> freq;
    
    for (char c : s) {
        freq[c]++;
    }

    string left_half = "";
    string mid = "";
    int impares = 0;
    for (auto &[c, f] : freq) {
        if (f & 1){
            impares++;
            if (impares > 1) {
                cout << "NO SOLUTION" << endl;
                return 0;
            }
            mid = c; //Frecuencia impar -> char central
        }
        left_half += string(f/2, c);
    }
    
    cout << left_half << mid << string(left_half.rbegin(), left_half.rend()) << endl;
    return 0;
}
