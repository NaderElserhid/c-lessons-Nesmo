#include<bits/stdc++.h>
using namespace std;

int main (){
    long long n;
    cin >> n;

    vector<long long> divisors;

    for(long long i = 1; i * i <= n; i++){
        if (n % i == 0){
            divisors.push_back(i);

            if(i != n/i){
                divisors.push_back(n/i);
            }
        }
    }

sort(divisors.begin(), divisors.end());

    for(long long i : divisors){
        cout << "the divisors of " << n << " = " << i << "\n";
    }

    return 0;
}
