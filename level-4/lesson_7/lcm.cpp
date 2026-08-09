#include <bits/stdc++.h>
using namespace std;


int gcd_naive(int a, int b) {
    int result = 1;
    for (int i = 1; i <= min(a, b); i++) {
        if (a % i == 0 && b % i == 0)
            result = i;
    }
    return result;
}


long long lcm(long long a , long long b){
   if(a == 0 || b == 0) return 0;
   return (a / gcd(a , b)) * b ;
}

void number_smple(int num , int den ){
 int common = gcd(num , den);
  num /= common;
  den /= common;

  cout << num << "/" << den << endl ;
}

void meeting_lamps(int a ,int  b){

  cout << lcm(a,b);

}


int main(){

  int a, b;
  cin >> a >> b;



cout << gcd(a,b);
cout << gcd(a,b);

}
