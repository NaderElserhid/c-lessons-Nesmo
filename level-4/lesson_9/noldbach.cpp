#include<bits/stdc++.h>
using namespace std;

const long long MAX_N = 10'000'000;
vector<bool> is_prime(MAX_N + 1, true);
vector<int> primes;


int findPrime(int n){
    is_prime[0] = is_prime[1] = false;

    for(long long i = 2 ; i * i <= MAX_N ; i++){
        if(is_prime[i]){
            for(long long j = i * i ; j <= MAX_N ; j+=i){
                is_prime[j] = false;
            }
        }
    }

    for(long long  i = 2 ; i <= n ; ++i){
        if(is_prime[i])
            primes.push_back(i);
    }

    int counter = 0;

    for(long long i = 1 ; i < primes.size(); ++i){
        int sum = primes[i] + primes[i - 1] + 1;
        if(sum  <= n && is_prime[sum]){
                cout << sum << " \n";
            counter++;
        }
    }

    return counter;
}

int main(){
  int n , k;
    cin >> n >> k;

    if(findPrime(n) >= k){
         cout << "YES\n";
    }else{
         cout << "NO\n";
    }

    return 0;
}
