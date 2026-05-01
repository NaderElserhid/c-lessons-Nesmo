#include <iostream>
using namespace std;

long long dp[200][200000];
int v[200], w[200];


long long f (int i, int capacity) {

    if (i == 0) {
    if (capacity < w[i]) {
      return 0;
    }
    else {
      return v[i];
    }
    }

  if (dp[i][capacity] != -1) {
    return dp[i][capacity];
  }


  dp[i][capacity] = f(i - 1, capacity);

  if (capacity >= w[i]) {
    dp[i][capacity] = max(dp[i][capacity], f(i - 1, capacity - w[i]) + v[i]);
  }

  return dp[i][capacity];
}


int main() {

    for (int i = 0; i < 200; i++) {
    for (int j = 0; j < 200000; j++) {
          dp[i][j] = -1;
    }
    }

    int n, weight;
    cin >> n >> weight;

  for (int i = 0; i < n; i++) {
    cin >> w[i] >> v[i];
  }

  cout << f(n - 1, weight) << endl;
}
