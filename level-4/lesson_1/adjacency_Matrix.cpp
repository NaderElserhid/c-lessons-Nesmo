#include <iostream>
#include <vector>

using namespace std;

// تعريف الثوابت للحدود القصوى (القيود)
const int maxN = 100'000;
const int maxM = 200'000;

// استخدام +1 لأن الـ Vertices في المسائل غالبًا تبدأ من 1 (1-based indexing)
vector<int> adj[maxN + 1];

int main() {
    // تسريع عمليات الإدخال والإخراج (مهم جداً في المسابقات)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    // قراءة الحواف (Edges)
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v); // أضف v إلى قائمة جيران u

        // إذا كان الرسم البياني غير موجه (Undirected)، نلغي التعليق عن السطر التالي:
        adj[v].push_back(u); // أضف u إلى قائمة جيران v
    }

    return 0;
}

/*
======================================================
💡 ملحق: كيفية التعديل للـ Weighted Graphs (الرسوم ذات الأوزان)
======================================================
نستخدم std::pair لتخزين (الجار، الوزن) معاً في الـ vector:

#include <utility>
vector<pair<int, int>> adj_weighted[maxN + 1];

// طريقة الإدخال داخل حلقة for:
// int u, v, w;
// cin >> u >> v >> w;
// adj_weighted[u].push_back({v, w});
// adj_weighted[v].push_back({u, w}); // للرسم غير الموجه
======================================================
*/
