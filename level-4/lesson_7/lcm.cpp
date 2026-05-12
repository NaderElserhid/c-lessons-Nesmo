#include <bits/stdc++.h>
using namespace std;

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
  number_smple(a, b);
  meeting_lamps(a,b);




}
