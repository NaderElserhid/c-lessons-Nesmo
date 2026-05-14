#include <bits/stdc++.h>


using namespace std;



 int max( int a,int b){
 return a * b;
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

  cout <<"max = " << max(a,b)<<endl;
 cout <<"gcd = " << gcd(a,b)<<endl;
}
