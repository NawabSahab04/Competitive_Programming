#include <bits/stdc++.h>
using namespace std;

#define forn(i,a,n) for(long long i = a; i < n; i++)
#define endl "\n" 
#define int long long

const int MAXN = 200100;
const int MOD = 1000000007;
const double PI = 3.14159265358979323846;
#include <iostream>
#include <cstdlib>
#include <ctime>

int powll(int b, int p)
{
    int a=1;
    forn(i,0,p) a= a*b%MOD;
    return a;
}
using namespace std;
void solve() {
    std::cout << std::fixed << std::showpoint << std::setprecision(10);
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
