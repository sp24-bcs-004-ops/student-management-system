# Operation Flow Explanations — Doubly Linked List (Member: Muhammad Sohaib)

## 1. Add Student
- **What it does:** Adds a new student (name, roll, class) to the list.
- **DS used:** Doubly Linked List
- **Why suitable:** prev/next pointers allow O(1) insertion at tail (once tail is known) and easy future backward traversal.
- **User interaction:** User fills “Add Student” form → system creates node → if head==NULL set head=newNode else append to tail and set pointers.

## 2. Delete Student
- **What it does:** Removes a student node by roll number.
- **DS used:** Doubly Linked List
- **Why suitable:** Adjust prev.next and next.prev to remove node without shifting other nodes.
- **User interaction:** User enters roll → system finds node → update pointers → free node → notify user.

## 3. Display Students (Forward / Backward)
- **What it does:** Shows all student records in forward or reverse order.
- **DS used:** Doubly Linked List
- **Why suitable:** Can traverse from head to tail or from tail to head using prev/next.
- **User interaction:** User selects “View All” or “View Reverse” → system traverses and lists records.
