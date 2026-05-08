#include <iostream>
#include <utility>

using namespace std;

const int Max_N = 1000000;
const int Max_M = 2000000;

pair<int , int > E[Max_M];

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n , m;
    cin >> n >> m ;


    for(int i =0 ; i < m ; i++){
        int u ,v ;
        cin >> u >> v ;
        E[i] = {u,v};
    }


    return 0;
}
