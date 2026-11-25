// ===================================================
// المناطق الخاصة في الصحراء
// الخوارزمية: Bounding Box + Prefix Sum
// التعقيد: O(n*m + k)
// ===================================================

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    // الشبكة الرئيسية
    vector<vector<int>> grid(n + 1, vector<int>(m + 1));

    // الصندوق المحيط + عدد الخلايا لكل نوع
    vector<int> r1(k + 1, n + 1), r2(k + 1, 0);
    vector<int> c1(k + 1, m + 1), c2(k + 1, 0);
    vector<long long> cnt(k + 1, 0);

    // قراءة الشبكة وحساب الـ bounding box
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> grid[i][j];
            int t = grid[i][j];
            r1[t] = min(r1[t], i);
            r2[t] = max(r2[t], i);
            c1[t] = min(c1[t], j);
            c2[t] = max(c2[t], j);
            cnt[t]++;
        }
    }

    // prefix sum ثنائي الأبعاد
    vector<vector<long long>> pre(n + 2, vector<long long>(m + 2, 0));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            pre[i][j] = 1 + pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1];

    // دالة الاستعلام عن مجموع مستطيل
    auto query = [&](int r1, int c1, int r2, int c2) -> long long {
        return pre[r2][c2] - pre[r1-1][c2]
                            - pre[r2][c1-1]
                            + pre[r1-1][c1-1];
    };

    int ans = 0;

    // فحص كل نوع من الجمال
    for (int t = 1; t <= k; t++) {
        if (cnt[t] == 0) continue; // النوع غير موجود

        long long box = (long long)(r2[t] - r1[t] + 1)
                       * (c2[t] - c1[t] + 1);

        // الشرط الأول: يملأ الصندوق تمامًا
        if (box != cnt[t]) continue;

        // الشرط الثاني: كل الصندوق مشغول (لا خلايا فارغة أو مختلطة)
        long long total_in_box = query(r1[t], c1[t], r2[t], c2[t]);
        if (total_in_box != box) continue;

        ans++;
    }

    cout << ans << '\n';
    return 0;
}
