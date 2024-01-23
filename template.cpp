#include <bits/stdc++.h>
using namespace std;

#define forn(i,a,n) for(long long i = a; i < n; i++)
#define endl "\n" 
#define int long long

const int MAXN = 200100;
const int MOD = 1000000007;
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++) {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true) {
            // Update all multiples of p greater than or
            // equal to the square of it numbers which are
            // multiple of p and are less than p^2 are
            // already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    // Print all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}
// Function to perform modular exponentiation (a^b mod m)
long long modExp(long long base, long long exponent, long long modulus) {
    long long result = 1;
    base = base % modulus;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % modulus;
        }
        exponent = exponent >> 1;
        base = (base * base) % modulus;
    }
    return result;
}

// Function to perform the Miller-Rabin primality test
bool millerRabinTest(long long num, int iterations=10) {
    if (num <= 1 || num == 4) {
        return false;
    }
    if (num <= 3) {
        return true;
    }

    // Find r such that num = 2^r * d + 1
    long long d = num - 1;
    while (d % 2 == 0) {
        d /= 2;
    }

    // Perform Miller-Rabin test
    for (int i = 0; i < iterations; i++) {
        long long a = 2 + rand() % (num - 4);
        long long x = modExp(a, d, num);
        if (x == 1 || x == num - 1) {
            continue;
        }

        bool isWitness = false;
        while (d != num - 1) {
            x = (x * x) % num;
            d *= 2;
            if (x == 1) {
                return false;
            }
            if (x == num - 1) {
                isWitness = true;
                break;
            }
        }

        if (!isWitness) {
            return false;
        }
    }

    return true;
}

void solve() {
    //Write you code here
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int T = 1;
    //cin >> T;//Comment this out in case number of test cases are not to be taken as input.
    for(int I = 1; I <= T; I++) {
        solve(); 
    }
    return 0;
}