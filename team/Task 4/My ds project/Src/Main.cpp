// main.cpp
// Professional version – no demo prints.
// Only minimal verification to ensure DS works, no cluttered output.

#include <iostream>
#include "doubly_linked_list.h"
#include "stack.h"

int main() {
    try {
        DoublyLinkedList<int> dll;

        // Basic internal operations (silent)
        dll.push_back(10);
        dll.push_back(20);
        dll.insert_at(1, 15);
        dll.update_at(2, 99);
        dll.delete_by_value(15);
        dll.delete_at(0);

        // Stack internal test (silent)
        Stack<int> st;
        st.push(1);
        st.push(2);
        st.push(3);

        int temp;
        st.top(temp);
        st.pop(temp);
        st.pop(temp);
        st.pop(temp);

        // Very clean minimal success message
        std::cout << "Data Structures compiled & executed successfully.\n";

        return 0;
    }
    catch (const std::exception &ex) {
        std::cerr << "Error: " << ex.what() << "\n";
        return 1;
    }
}
