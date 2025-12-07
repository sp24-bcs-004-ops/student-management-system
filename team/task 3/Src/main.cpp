#include <iostream>
#include "StudentDoublyList.cpp"
#include "UndoStack.cpp"
using namespace std;

int main() {
    StudentList list;
    UndoStack undo;

    // Add Students
    cout << list.addStudent("S1", "Ali", 20) << endl;
    cout << list.addStudent("S2", "Sara", 21) << endl;
    cout << list.addStudent("S1", "Duplicate", 30) << endl; // should fail

    // Delete Student + push to undo stack
    Student deleted;
    if(list.deleteStudent("S2", deleted)) {
        undo.push({deleted.id, deleted.name, deleted.age});
    }

    // Undo Operation
    StackStudent undoData;
    if(undo.pop(undoData)) {
        list.addStudent(undoData.id, undoData.name, undoData.age);
    }

    // Display Final Records
    list.display();
}
