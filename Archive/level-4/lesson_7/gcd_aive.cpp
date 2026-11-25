#include <bits/stdc++.h>


using namespace std;


 int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int gcd_iter(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(){

  int a, b;
  cin >> a>> b;
 cout <<"gcd = " << gcd(a,b)<<endl;
 cout <<"gcd_iter = " << gcd_iter(a,b)<<endl;
}
