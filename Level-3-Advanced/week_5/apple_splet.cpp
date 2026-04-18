#include <iostream>
using namespace std;

int n;
long long a[20];
long long best; // أفضل (أصغر) فرق وجدناه حتى الآن

void solve(int i, long long sum1, long long sum2) {

    // الحالة الأساسية: قسّمنا جميع العناصر
    if (i == n) {
        long long diff = abs(sum1 - sum2);
        best = min(best, diff); // نحدّث الحل الأفضل
        return;
    }

    // الاحتمال الأول: نضع a[i] في المجموعة الأولى
    solve(i + 1, sum1 + a[i], sum2);

    // الاحتمال الثاني: نضع a[i] في المجموعة الثانية
    solve(i + 1, sum1, sum2 + a[i]);
}

int main() {
    cin >> n;
    long long total = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }
    best = total; // أسوأ حالة: نضع الكل في مجموعة واحدة
    solve(0, 0, 0);
    cout << best << "\n";
    return 0;
}
