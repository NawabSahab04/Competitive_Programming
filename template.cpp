#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
using namespace std;

#define forn(i,a,n) for(long long i = a; i < n; i++)
#define endl "\n" 
#define int long long
#define GETBIT(a, n) ((a >> n) & 1)
#define BITCOUNT(a) __builtin_popcount(a)
#define pb push_back
//add ll at the end of bitwise functions for long long, else they will convert to int by default

const int MAXN = 200100;
const int MOD = 1000000007;
const double PI = 3.14159265358979323846;
#include <iostream>
#include <cstdlib>
#include <ctime>

const int N = 2e5+20;
bool visited[N];
set<int> adj[N];
vector<int> comp;

using namespace std;
void solve() {
    std::cout << std::fixed << std::showpoint << std::setprecision(8);
    //Write your code here
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int T = 1;
    //cin >> T;
    for(int I = 1; I <= T; I++) {
        solve(); 
    }
    return 0;
}
