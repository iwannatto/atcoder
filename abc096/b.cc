#include <algorithm>
#include <bitset>
#include <cmath>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <utility>
using namespace std;

#define ABS(a) (((a) >= 0) ? (a) : -(a))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) > (b) ? (b) : (a))
#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define RFOR(i, a, b) for (int i = a; i > b; --i)
#define REP(i, n) for (int i = 0; i < n; ++i)
#define int long long

typedef long long ll;
typedef pair<int, int> Pair;

// const int kMaxN;

int A, B, C, K;
int ans = 0;

signed main() {
  cin >> A >> B >> C;
  cin >> K;

  int m = MAX(A, MAX(B, C));
  int n = 1;
  REP(i, K) { n *= 2; }
  ans = A+B+C - m + m*n;

  cout << ans << endl;
  return 0;
}
