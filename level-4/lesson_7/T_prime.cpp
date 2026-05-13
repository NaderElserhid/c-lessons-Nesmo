#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long n){
    if (n <= 1) return false;

    for(long long i = 2 ; i * i <= n ; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin>>n;

    vector<long long> v;

    for(long long i = 0 ; i < n ; i++){

        long long x;
        cin  >> x ;

        long long sq1 = sqrt(x);

        if(sq * sq != x){
            cout << "NO\n";
            continue;
        }

        if(isPrime(sq)) {
           cout<< "YES\n";
        } else {
           cout<<"NO\n";
        }
    }

    return 0;
}
