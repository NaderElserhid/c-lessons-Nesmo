#include <iostream>
using namespace std;

int main() {

// 1. Read the dimensions of the square (N, M) and the tile size A
int n, m, a;
cin >> n >> m >> a;

// 2. Calculate the number of tiles needed in each direction
// v = number of tiles along the length
// h = number of tiles along the width
// We use the ceiling division formula: (x + y - 1) / y
long long v = (n + a - 1) / a;
long long h = (m + a - 1) / a;

// 3. Print the total number of tiles needed (v * h)
cout << v * h;

return 0;

}
