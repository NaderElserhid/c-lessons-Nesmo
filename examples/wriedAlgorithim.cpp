#include <iostream>
using namespace std;

int main() {

    // Read the starting number
    long long n;
    cin >> n;

    // Loop until the number becomes 1
    while (true) {

        // Print the current value of n
        cout << n << " ";

        // If n is 1, stop the loop
        if (n == 1)
            break;

        // If n is even, divide it by 2
        if (n % 2 == 0) {
            n /= 2;
        }
        // If n is odd, multiply by 3 and add 1
        else {
            n = n * 3 + 1;
        }
    }

    return 0;
}
