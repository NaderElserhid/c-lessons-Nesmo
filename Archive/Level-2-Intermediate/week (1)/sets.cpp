#include <iostream>
#include <set>
using namespace std;

int main() {
    // Create a set to store the IDs of attending students
    set<int> afak_students;

    // 1. Inserting students (Insertion)
    // Note that we insert the IDs in a random order
    afak_students.insert(105);
    afak_students.insert(101);
    afak_students.insert(108);
    afak_students.insert(103);

    // Attempting to insert an already registered student (inserted by mistake)
    afak_students.insert(101);

    cout << "--- Afak Team Attendance System ---\n";

    // 2. Printing the size to know the actual number of attendees
    cout << "Number of attending students: " << afak_students.size() << " students.\n";

    // 3. Checking if a specific student is present (Count / Search)
    int searchID = 103;
    if (afak_students.count(searchID) == 1) {
        cout << "Student with ID " << searchID << " is (Present).\n";
    } else {
        cout << "Student with ID " << searchID << " is (Absent).\n";
    }

    // 4. Erasing a student (e.g., a student left the room early)
    afak_students.erase(108);
    cout << "Student 108 has been removed for leaving early.\n";

    // 5. Printing the final attendance list (Iteration and Automatic Sorting)
    cout << "\nFinal Attendance List (Automatically Sorted):\n";
    for (int id : afak_students) {
        cout << "- Student ID: " << id << "\n";
    }

    return 0;
}
