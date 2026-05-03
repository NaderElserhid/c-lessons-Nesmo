// =====================================================
// إزالة الأعداد — Queue + HashMap
// التعقيد: O((N+Q) log N)
// =====================================================

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<int> A(n);
    for (int i = 0; i < n; i++) cin >> A[i];

    // لكل قيمة: قائمة مؤشراتها من اليسار لليمين
    unordered_map<int, queue<int>> pos;
    for (int i = 0; i < n; i++)
        pos[A[i]].push(i);

    // مجموعة المؤشرات التي سيُزال أصحابها
    unordered_set<int> removed;

    // تنفيذ الأوامر
    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;

        auto it = pos.find(x);
        if (it != pos.end() && !it->second.empty()) {
            int idx = it->second.front(); // الأقرب لليسار
            it->second.pop();
            removed.insert(idx);
        }
        // إن لم يوجد: لا شيء يحدث
    }

    // طباعة الباقين بترتيبهم الأصلي
    bool first = true;
    for (int i = 0; i < n; i++) {
        if (!removed.count(i)) {
            if (!first) cout << ' ';
            cout << A[i];
            first = false;
        }
    }
    cout << '\n';

    return 0;
}
