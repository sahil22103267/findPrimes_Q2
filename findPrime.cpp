#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> findPrimes(int n) {
    vector<bool> isPrime(n + 1, true);
    vector<int> primes;

    for (int i = 2; i <= sqrt(n); i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }

    return primes;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 2) {
        cout << "There are no prime numbers less than " << n << endl;
        return 0;
    }

    vector<int> primes = findPrimes(n);

    cout << "Prime numbers up to " << n << " are:" << endl;
    for (int prime : primes) {
        cout << prime << " ";
    }
    cout << endl;

    return 0;
}
