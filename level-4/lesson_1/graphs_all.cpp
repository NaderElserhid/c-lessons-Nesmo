#include <iostream>

using namespace std;

const int maxN = 1'000;   // صغير بسبب O(N²) للذاكرة
const int maxM = 200'000; // +1 لأن الـ Vertices غالبًا تبدأ من 1

bool  G[maxN + 1][maxN + 1];

int main() {
    // تسريع عمليات الإدخال والإخراج
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int u, v ;
        cin >> u >> v ;

        G[u][v] = true;
        G[v][u] = true; // إذا undirected
    }

    return 0;
}

// للـ Weighted Graphs:
// int G[maxN+1][maxN+1]; // 0 تعني لا توجد Edge
// G[u][v] = w; // وزن الـ Edge
