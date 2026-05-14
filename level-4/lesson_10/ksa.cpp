#include <bits/stdc++.h>
using namespace std;

void factorize(long long n){
for(long long i = 2 ; i * i <= n ; i++){
    while(n % i == 0){
        cout << i <<" , " ;
        n /=  i;
    }
}

if(n > 1){
    cout << n ;
}
  cout << "\n" ;
}

int main() {
    long long n ;
    cin>> n;

 factorize(n);

    return 0;
}
