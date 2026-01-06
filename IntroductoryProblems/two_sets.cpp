#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long total = n * (n+1) / 2;
    if (total % 2) {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    unordered_set<long long> A; 
    unordered_set<long long> B; 

    for (long long i=1; i <= n/2; i+=1) {
        if (i % 2) {
            A.insert(i);
            A.insert(n+1-i);
        }
        else {
            B.insert(i);
            B.insert(n+1-i);
        }
    }
    
    if (n % 2 == 1){
        long long mid = (n + 1) / 2; // par
        if (mid/2 % 2) {
            B.insert(mid);
            A.erase(mid/2);
            B.insert(mid/2);
        } else {
            A.insert(mid);
            B.erase(mid/2);
            A.insert(mid/2);
            B.insert(n);
            B.insert(1);
            A.erase(n);
            A.erase(1);
        }
    }

    cout << A.size() << endl;
    for (const auto& num : A) {
        cout << num << " ";
    }
    cout << endl;

    cout << B.size() << endl;
    for (const auto& num : B) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
