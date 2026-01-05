#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >> n;    
    for (long long k=1; k <= n; k++) {
        long long pares = (k*k) * (k*k - 1) / 2; // Total pares de casillas
        // cajas de 3x2 = (k-2) * (k-1)
        // cajas de 2x3 = (k-1) * (k-2)
        long long cajas = 2 * ((k-1) * (k-2));
        // 2 pares bloqueados por caja
        long long pares_bloqueados = 2 * cajas;
        
        cout << (pares - pares_bloqueados) << endl;
    }
}
