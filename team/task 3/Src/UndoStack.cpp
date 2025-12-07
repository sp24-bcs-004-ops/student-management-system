#include <iostream>
using namespace std;

struct StackStudent {
    string id, name;
    int age;
};

class UndoStack {
private:
    StackStudent arr[50];
    int top;

public:
    UndoStack() { top = -1; }

    bool push(StackStudent s) {
        if(top == 49) return false;
        arr[++top] = s;
        return true;
    }

    bool pop(StackStudent &s) {
        if(top == -1) return false;
        s = arr[top--];
        return true;
    }
};
