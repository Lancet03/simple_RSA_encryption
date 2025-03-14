#include "Encryptor.h"
#include <cstdlib>
#include <ctime>

void Encryptor::GenerateKeysPair(int _p, int _q) {
    int p = _p;
    int q = _q;
    if (!IsPrimeNumber(_p) || !IsPrimeNumber(_q)) {
        int p = GeneratePrimeNumber(3, 10000);
        int q = GeneratePrimeNumber(3, 10000);
    }
    int n = p * q;
    int phi = (p - 1) * (q - 1);

    int 
}

bool Encryptor::IsPrimeNumber(int n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}

int Encryptor::GeneratePrimeNumber(int min, int max) {
    int _min = min;
    int _max = max;
    if (min > max) {
        _min = max;
        _max = min;
    }; 
    srand(time(0)); 

    int prime;
    do {
        prime = _min + rand() % (_max - _min + 1);
    } while (!IsPrimeNumber(prime));

    return prime;
}

int Encryptor::gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
