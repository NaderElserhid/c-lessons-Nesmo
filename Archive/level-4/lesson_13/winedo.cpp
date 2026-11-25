#include <iostream>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    int n, k;
    cin >> n >> k;

    pair<int, int> a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i;  // الفهرس يضمن عدم التكرار
    }

    ordered_set<pair<int, int>> os;

    // أدخل النافذة الأولى
    for (int i = 0; i < k; i++) {
        os.insert(a[i]);
    }

    // حساب موضع الوسيط
    int median = (k % 2 == 0) ? k/2 - 1 : k/2;

    // طباعة وسيط النافذة الأولى
    pair<int, int> ans = *os.find_by_order(median);
    cout << ans.first << ' ';

    // التحرك عبر جميع النوافذ
    for (int i = 0; i < n - k; i++) {
        os.erase(a[i]);      // احذف أول عنصر في النافذة
        os.insert(a[i + k]); // أضف العنصر الجديد

        pair<int, int> ans = *os.find_by_order(median);
        cout << ans.first << ' ';
    }
    return 0;
}
// التعقيد الزمني: O(n log n)
// التعقيد المكاني: O(k)
