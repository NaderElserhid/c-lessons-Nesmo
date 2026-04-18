#include <iostream>
using namespace std;

int main() {

    // 1. Read three integers from the user
    int a, b, c;
    cin >> a >> b >> c;

    // 2. Find the smallest number manually
    int smallest = a;

    if (b < smallest) {
        smallest = b;
    }

    if (c < smallest) {
        smallest = c;
    }

    // 3. Calculate the sum of all numbers minus the smallest
    int others_sum = (a + b + c) - smallest;

    int sum = smallest * others_sum

    // 4. Multiply the smallest number by the sum of the other two
    cout << sum << endl;

    return 0;
}
