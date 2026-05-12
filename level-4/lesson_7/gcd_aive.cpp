#include <bits/stdc++.h>


using namespace std;



int gcd_naive(int a, int b){
  int result = 1;
  for(int i = 1 ; i <= min(a , b) ; i++){
    if(a % i == 0 && b & i == 0)
        result = i;
  }
  return result;
}






int main(){

  int a, b;
  cin >> a>> b;
 cout <<"lcm = " <<lcm(a,b)<<endl;
 cout <<"gcd = " << gcd(a,b)<<endl;




}
