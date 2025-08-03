#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

Node* insert(Node*& head, int num) {
    Node* newNode = new Node(num);
    if (head == nullptr) {
        head = newNode;
        return head;
    }
    newNode->next = head;
    head = newNode;
    return head;
}

void search(Node* head, int target) {
    if (head == nullptr)
        return;
    bool found = false;
    Node* current = head;
    while (current != nullptr) {
        if (current->data == target) {
            found = true;
            break;
        }
        current = current->next;
    }
    found ? cout << "Found" : cout << "Not Found";
}

int main() {
    Node* head = nullptr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        insert(head, num);
    }
    int target;
    cin >> target;
    search(head, target);
}
