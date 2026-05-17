#include <bits/stdc++.h>
using namespace std;


const int max_b = 10000000;
const int max_a = 10000000;

int b[max_b];
int a[max_a];

int n;
int sz;

// 1. دالة الاستعلام (تم إصلاح أنواع المتغيرات int l, int r)
int queryMax(int l, int r) {
    int blockL = l / sz;
    int blockR = r / sz;
    int ans = INT_MIN;

    // الحالة الخاصة: l و r في الكتلة ذاتها
    if (blockL == blockR) {
        for (int i = l; i <= r; i++)
            ans = max(ans, a[i]);
        return ans;
    }

    // الجزء الأيسر — الكتلة الأولى الجزئية
    for (int i = l; i < (blockL + 1) * sz; i++)
        ans = max(ans, a[i]);

    // الكتل الوسطى الكاملة
    for (int i = blockL + 1; i < blockR; i++)
        ans = max(ans, b[i]);

    // الجزء الأيمن — الكتلة الأخيرة الجزئية
    for (int i = blockR * sz; i <= r; i++)
        ans = max(ans, a[i]);

    return ans;
}

int main() {

    int l, r;
    cin >> n >> l >> r;

    // حساب حجم الكتلة بناءً على حجم المصفوفة n
    sz = sqrt(n);


    // تهيئة مصفوفة الكتل b بقيم صغيرة جداً قبل البدء
    int num_blocks = (n + sz - 1) / sz;
    for(int i = 0; i < num_blocks; i++) {
        b[i] = INT_MIN;
    }

    // قراءة عناصر مصفوفة a
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // خطوة هامة جداً: بناء مصفوفة الكتل b (يجب أن تتم قَبْل الاستعلام)
    for(int i = 0; i < n; i++) {
        b[i / sz] = max(b[i / sz], a[i]);
    }

    // استدعاء دالة الاستعلام وطباعة النتيجة
    int result = queryMax(l, r);
    cout << result << endl;


    return 0;
}
