#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> divisors;

int n = 240;
int max_rang = 20;
int min_rang = 10;

int fidFormation(){

    for(int i = 1 ;  i * i <= n ; i++){
        if(n % i == 0){
            if(i * i == n){
                divisors.push_back({i, i});
            } else {
                divisors.push_back({i, n/i});
                divisors.push_back({n/i, i});
            }
        }
    }

    int count = 0;
    for(auto p : divisors ){
        if(p.first >= min_rang && p.first <= max_rang){
            count++;
            cout << p.first << " rows " << p.second << " colms \n";
        }
    }
    return count;
}

int main(){

    cout << fidFormation() << "\n";

    return 0;
}
