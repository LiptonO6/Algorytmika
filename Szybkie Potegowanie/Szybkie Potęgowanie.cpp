#include <iostream>
using namespace std;

// Funkcja wykonująca szybkie potęgowanie a^n
long long fast_pow(long long a, long long n) {
    long long result = 1;
    while (n > 0) {
        if (n % 2 == 1) {
            result *= a;
        }
        a *= a;
        n /= 2;
    }
    return result;
}

int main() {
    long long a, n;

    cout << "Podaj podstawę (a): ";
    cin >> a;

    cout << "Podaj wykładnik (n): ";
    cin >> n;

    long long wynik = fast_pow(a, n);

    cout << "Wynik: " << wynik << endl;

    return 0;
}
