/* Author: Code__R
   Email: mondalroudra212@gmail.com
   Date  : 05 / 15 / 2025
   Time  : 15:18
   Problem Link: 
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define ld long double
#define pb push_back
#define po pop_back
#define mx max()
#define min min()
#define all(v) v.begin(), v.end()
#define F first
#define S second

const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ld PI = acos(-1.0);

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
void solve() {
    // Your code here
    map<int, int> v;
    v[1] = 1044;
    v[2] = 1033;
    v[3] = 21055;
    v[4] = 1032;
    for (pair<int,int>a:v)
    {
      cout << a.first << " = " << a.second << nl;// key is always sorted 
    }
}

int main() {
    fast_io;
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
