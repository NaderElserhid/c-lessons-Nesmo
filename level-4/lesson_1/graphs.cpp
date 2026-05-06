#include <iostream>
#include <utility> // ضرورية لاستخدام std::pair

using namespace std;

const int maxN = 100'000;
const int maxM = 200'000;
pair<int, int> E[maxM];

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v; // نخزّن كل Edge كزوج في المصفوفة 
        E[i] = {u, v}; // نخزّن كل Edge كزوج في المصفوفة
    }

    
    return 0;
}
