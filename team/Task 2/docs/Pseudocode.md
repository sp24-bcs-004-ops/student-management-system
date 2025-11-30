# Pseudocode.md
## Doubly Linked List functions (Member: Muhammad Sohaib)

### Node structure

### 1. addStudent(name, roll, class)
IF head IS NULL:
    head = newNode
    RETURN

temp = head
WHILE temp.next IS NOT NULL:
    temp = temp.next

temp.next = newNode
newNode.prev = temp

### 2. searchStudent(roll)

### 3. deleteStudent(roll)
        IF temp.next IS NOT NULL:
            temp.next.prev = temp.prev

        RETURN temp  // deleted node
    temp = temp.next
RETURN "Not Found"

### 4. updateStudent(roll, newName, newClass)

### 5. displayForward()

### 6. displayBackward()
