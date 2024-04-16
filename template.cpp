#include <bits/stdc++.h>
using namespace std;

#define forn(i,a,n) for(long long i = a; i < n; i++)
#define endl "\n" 
#define int long long
#define GETBIT(a, n) ((a >> n) & 1)
#define BITCOUNT(a) __builtin_popcount(a)
//add ll at the end of bitwise functions for long long, else they will convert to int by default
//BITCOUNT performs an operation for each bit in the given number, and stores the sum

const int MAXN = 200100;
const int MOD = 1000000007;
const double PI = 3.14159265358979323846;
#include <iostream>
#include <cstdlib>
#include <ctime>

long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

int powll(int b, int p)
{
    int a=1;
    forn(i,0,p) a= a*b%MOD;
    return a;
}
bool subsequence(string t, string s) {
    if(s == t)
    return true;
    int n = s.size();
    int m = t.size();
    int j = 0;
    for(int i = 0; i < n; i++){
        if(t[j] == s[i])
        j++;
        if(j == t.size())
        return true;
    }
    return false;
}
using namespace std;
void solve() {
    std::cout << std::fixed << std::showpoint << std::setprecision(8);
    //Write your code here
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
