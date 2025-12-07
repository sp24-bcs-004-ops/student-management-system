#include <iostream>
using namespace std;

struct Student {
    string id, name;
    int age;
};

struct Node {
    Student data;
    Node* prev;
    Node* next;
    Node(Student s) : data(s), prev(NULL), next(NULL) {}
};

class StudentList {
private:
    Node* head;
    Node* tail;

public:
    StudentList() { head = tail = NULL; }

    bool addStudent(string id, string name, int age) {
        if(search(id) != NULL) return false; // duplicate

        Student s = {id, name, age};
        Node* newNode = new Node(s);

        if(!head) {
            head = tail = newNode;
            return true;
        }

        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        return true;
    }

    bool deleteStudent(string id, Student &deletedRecord) {
        Node* temp = search(id);
        if(!temp) return false;

        deletedRecord = temp->data;

        if(temp == head && temp == tail) {
            head = tail = NULL;
        }
        else if(temp == head) {
            head = head->next;
            head->prev = NULL;
        }
        else if(temp == tail) {
            tail = tail->prev;
            tail->next = NULL;
        }
        else {
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
        }

        delete temp;
        return true;
    }

    Node* search(string id) {
        Node* temp = head;
        while(temp) {
            if(temp->data.id == id) return temp;
            temp = temp->next;
        }
        return NULL;
    }

    void display() {
        Node* temp = head;
        if(!temp) {
            cout << "No records.\n";
            return;
        }
        while(temp) {
            cout << temp->data.id << " | " 
                 << temp->data.name << " | " 
                 << temp->data.age << endl;
            temp = temp->next;
        }
    }
};

