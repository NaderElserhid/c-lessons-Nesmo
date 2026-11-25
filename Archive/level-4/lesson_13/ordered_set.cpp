#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

// Fix 1: Removed the duplicated 'ordered_set' at the end
template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    ordered_set<int> os;
    os.insert(10);
    os.insert(20);
    os.insert(30);

    // العنصر في الرتبة 0 (الأصغر): 10
    auto it = os.find_by_order(0); // يشير إلى 10

    // Fix 2: Added '*' to dereference the iterator and print the value
    cout << "Element at index 0: " << *it << "\n";

    // كم عنصر أصغر من 25؟ الجواب: 2 (وهما 10 و 20)
    int cnt = os.order_of_key(25); // = 2

    cout << "Count of elements smaller than 25: " << cnt << "\n";

    return 0;
}
