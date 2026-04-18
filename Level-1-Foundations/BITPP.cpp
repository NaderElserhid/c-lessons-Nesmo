#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x = 0;
    while (n--) {
        string s;
        cin >> s;


        if (s[1] == '+') {
            x++;
        }else if(s[1] == '-') {
            x--;
        }else{
        cout << "pleas enter + or - only ";
        }
    }

    cout << x << endl;
    return 0;
}
