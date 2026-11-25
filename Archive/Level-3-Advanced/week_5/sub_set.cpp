#include <iostream>
#include <vector>
using namespace std;

int n = 3;
int a[3] = {5, 3, 1};
vector<int> v; // يخزّن عناصر المجموعة الجزئية الحالية

void backtracking(int i) {

    // الحالة الأساسية: تجاوزنا جميع العناصر، اطبع المجموعة الجزئية
    if (i == n) {
        cout << "subset: ";
        for (int j = 0; j < v.size(); j++) {
            cout << v[j] << ' ';
        }
        cout << "\n";
        return;
    }

    // الاحتمال الأول: إضافة a[i] إلى المجموعة الجزئية
    v.push_back(a[i]);    // أضف a[i] إلى v
    backtracking(i + 1); // استكشف جميع الحلول التي تضم a[i]

    // الاحتمال الثاني: استبعاد a[i] من المجموعة الجزئية
    v.pop_back();         // تراجع عن إضافة a[i]
    backtracking(i + 1); // استكشف جميع الحلول التي لا تضم a[i]

    // لا نحتاج لتراجع هنا لأننا لم نُجرِ أي تغيير في الاحتمال الثاني
}

int main() {
    backtracking(0);
    return 0;
}
