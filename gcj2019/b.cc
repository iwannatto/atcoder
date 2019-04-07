#include <algorithm>
#include <bitset>
#include <cmath>
#include <functional>
#include <iostream>
#include <iterator>
#include <limits>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <utility>
#include <unordered_map>
#include <unordered_set>
using namespace std;

#define ABS(a) (((a) >= 0) ? (a) : -(a))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) > (b) ? (b) : (a))
#define FOR(i, a, b) for (int i = (a); i <= (b); ++i)
#define RFOR(i, a, b) for (int i = (a); i >= (b); --i)
#define REP(i, n) for (int i = 0; i < (n); ++i)
#define POW_10_5 100000
#define POW_10_9 1000000000
#define MOD 1000000007
#define INF (numeric_limits<int>::max()/2)
#define int long long

typedef pair<int, int> Pair;
typedef unordered_map<int, int> Hash;

// ---

signed main() {
  int n;
  cin >> n;
  FOR(i, 1, n) {
    int N;
    string P;
    cin >> N;
    cin >> P;
    string myP;
    REP(j, P.length()) {
      if (P[j] == 'S') {
        myP.push_back('E');
      } else {
        myP.push_back('S');
      }
    }

    cout << "Case #" << i << ": " << myP << endl;
  }

  return 0;
}
