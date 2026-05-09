#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    // Create a queue that holds strings
    queue<string> line;

    // 1. push(): Customers arrive and join the back of the line
    line.push("Alice");
    line.push("Bob");
    line.push("Charlie");

    cout << "Total people in line: " << line.size() << "\n";

    // 2. front() and back(): See who is first and who is last
    cout << "Next to be served: " << line.front() << "\n";
    cout << "Last person who joined: " << line.back() << "\n\n";

    // 3. pop() and empty(): Process the queue until it's empty
    cout << "--- Processing Line ---\n";
    while (!line.empty()) {
        // Look at who is at the front
        cout << "Serving: " << line.front() << "\n";

        // Remove them from the queue after serving
        line.pop();
    }

    cout << "\nEveryone has been served. Line is empty? "
         << (line.empty() ? "Yes" : "No") << "\n";

    return 0;
}
