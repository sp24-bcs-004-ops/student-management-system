#ifndef STACK_H
#define STACK_H

// stack.h
// Stack implemented on top of DoublyLinkedList

#include "doubly_linked_list.h"
#include <vector>
#include <iostream>

template<typename T>
class Stack {
private:
    DoublyLinkedList<T> storage;
public:
    Stack() {}
    ~Stack() {}

    void push(const T& v) { storage.push_back(v); }
    bool pop(T &out) { return storage.pop_back(out); }
    bool top(T &out) const { return storage.back(out); }
    bool empty() const { return storage.empty(); }
    size_t size() const { return storage.size(); }

    void print() const {
        std::vector<T> v = storage.to_vector_backward();
        std::string s = formatVector(v, " | ");
        if (s.empty()) std::cout << "(empty stack)\n";
        else std::cout << "Top -> " << s << "\n";
    }
};

#endif // STACK_H
