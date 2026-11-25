#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {

    queue<string> line;


    line.push("Alice");
    line.push("Bob");
    line.push("Charlie");

    cout << "Total people in line: " << line.size() << "\n";


    cout << "Next to be served: " << line.front() << "\n";
    cout << "Last person who joined: " << line.back() << "\n\n";



    while (!line.empty()) {

        cout << "Serving: " << line.front() << "\n";


        line.pop();
    }

    cout << "\nEveryone has been served. Line is empty? "
         << (line.empty() ? "Yes" : "No") << "\n";

    return 0;
}
