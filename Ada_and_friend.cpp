/* Author: Code__R
   Email: mondalroudra212@gmail.com
   Date  : 05 / 15 / 2025
   Time  : 18:47
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
    int n, k;
    cin >> n >> k;//taking input 
    map<string, long long> sum;
    for (int i = 0; i < n;i++)
    {
      string name;
      long long value;
      cin >> name >> value;
      sum[name] += value;// add two value
    }
    vector<long long> v;
    for (pair<string,long long> a : sum)
      {
        //cout << a.first << " " << a.second << nl;
        v.push_back(a.second);
      }
      sort(v.begin(), v.end());
      int n2 = v.size();
      int st = n2 - k;
      if (st<0) st = 0;
      long long ans = 0;
      for (int i = st; i < n2;i++)
      {
        ans += v[i];
      }
      cout << ans << nl;
}

int main() {
    fast_io;
    // int t ;
    // cin >> t;
    // while (t--) {
        solve();
    //}
    return 0;
}
