#include <iostream>
#include <algorithm>
#include <cmath>
#include <cassert>
#include <functional>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <bitset>
#include <map>
#include <unordered_map>
#include <memory>
#include <tuple>
#include <cctype>
#include <numeric>
#include <limits>
using namespace std;
using ll = long long;
using pi = pair<int,int>;
template<class T> using minpq = priority_queue<T,vector<T>,greater<T>>;
template<class T> using maxpq = priority_queue<T>;
#define F first
#define S second
#define EB emplace_back
#define endl '\n'
#define REPc(i,a,b) for (int i = a; i <= b; ++i)
#define REPh(i,a,b) for (int i = a; i < b; ++i)
#define REP1(i,n) REPc(i,1,n)
#define REP0(i,n) REPh(i,0,n)
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define AC accumulate
#define dbg cout << "wtf"
#define dbgpr(x) cout << #x << " is " << x << endl
#define LB lower_bound
#define UB upper_bound
/* for Geometry
#include <complex>
#define X real()
#define Y imag()
#define cross(u,v) (conj(u)*(v)).Y
using cll = complex<ll>;
using cld = complex<ld>;
*/
/* for Index Set
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using indexSet = tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>;
#define fbo find_by_order
#define ook order_of_key
*/
#define R first
#define C second
#define isIn0(r,c) (r >= 0 && r < maxr && c >= 0 && r < maxc)
#define isIn1(r,c) (r > 0 && r <= maxr && c > 0 && c <= maxc)
const int INF = INT_MAX, MOD = 1e9+7, dx[] = {0,0,1,-1}, dy[] = {1,-1,0,0};
const ll INFll = LLONG_MAX;

//start here
const maxr = 0, maxc = 0;

void solve() {}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
