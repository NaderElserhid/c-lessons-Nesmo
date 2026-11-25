#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, string> dictionary;
    dictionary["Car"] = "سيارة";
    dictionary["House"] = "منزل";

    auto it = dictionary.find("Car");

    if (it != dictionary.end()) {
        cout << "the word is  " << it->first << endl;
    } else {
        cout << "the word is not fond" << endl;
    }
    return 0;
}
