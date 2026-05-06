#include <iostream>
#include <vector>
#include <utility>

using namespace std;

/*
======================================================
  الطريقة الأولى: قائمة الحواف (Array of Edges)
======================================================
  - التعقيد المكاني: O(M)
  - الاستخدام: خوارزميات مثل Kruskal و Bellman-Ford
*/
namespace EdgeList {
    vector<pair<int, int>> edges; // نستخدم vector ديناميكي بدلاً من array ثابت

    void addEdge(int u, int v) {
        edges.push_back({u, v});
    }

    void print() {
        cout << "\n--- 1. Edge List ---\n";
        for (auto edge : edges) {
            cout << "Edge between: " << edge.first << " and " << edge.second << "\n";
        }
    }
}

/*
======================================================
  الطريقة الثانية: مصفوفة التجاور (Adjacency Matrix)
======================================================
  - التعقيد المكاني: O(N^2)
  - الاستخدام: الرسوم البيانية الصغيرة جداً (N <= 1000)
*/
namespace Matrix {
    const int maxN = 1005; // حجم صغير لتجنب تجاوز الذاكرة (Memory Limit)
    bool adj[maxN][maxN];

    void addEdge(int u, int v) {
        adj[u][v] = true;
        adj[v][u] = true; // الرسم غير موجه (Undirected)
    }

    void print(int n) {
        cout << "\n--- 2. Adjacency Matrix ---\n";
        for (int i = 1; i <= n; i++) {
            cout << "Node " << i << ": ";
            for (int j = 1; j <= n; j++) {
                cout << adj[i][j] << " ";
            }
            cout << "\n";
        }
    }
}

/*
======================================================
  الطريقة الثالثة: قائمة التجاور (Adjacency List)
======================================================
  - التعقيد المكاني: O(N + M)
  - الاستخدام: الطريقة القياسية والأكثر استخداماً في المسابقات
*/
namespace AdjList {
    const int maxN = 100'000;
    vector<int> adj[maxN + 1]; // +1 لأن العقد تبدأ من 1

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u); // الرسم غير موجه (Undirected)
    }

    void print(int n) {
        cout << "\n--- 3. Adjacency List ---\n";
        for (int i = 1; i <= n; i++) {
            cout << "Neighbors of Node " << i << ": ";
            for (int neighbor : adj[i]) {
                cout << neighbor << " ";
            }
            cout << "\n";
        }
    }
}

/*
======================================================
  الدالة الرئيسية (التجربة والتشغيل)
======================================================
*/
int main() {
    // تسريع الإدخال والإخراج
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cout << "Enter number of Nodes (N) and Edges (M): ";
    cin >> n >> m;

    cout << "Enter the " << m << " edges (u v):\n";
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;

        // بناء الرسم البياني بالطرق الثلاث في نفس اللحظة
        EdgeList::addEdge(u, v);
        Matrix::addEdge(u, v);
        AdjList::addEdge(u, v);
    }

    // طباعة النتائج لتوضيح الفرق للطلاب
    EdgeList::print();
    Matrix::print(n);
    AdjList::print(n);

    return 0;
}
