// The entire code can be seen commented for better understanding of self, and those who refer it.
#include <bits/stdc++.h>
using namespace std;

struct Node // custom data type using struct
{
  int data; // actual data
  Node* next; // pointer to next node
  Node(int data)
  {
    this -> data = data; // use this keyword to notify the compiler that we are using the data variable in current scope
    next = nullptr; // important to prevent unexpected behaviours
  }
};

Node* insertAtBeginning(Node* &head, int num) // pass head as reference so as to reflect changes back in main method, as well as value to be inserted
{
  Node* newNode = new Node(num); // using Node's constructor to initialize the new node's data
    if(head == nullptr) // checking if the head or the first node itself is empty
    {
      head = newNode; // if empty assign new node as first node
      return head;
    }
    newNode -> next = head; // from the second node we point the next to head node
    head = newNode; // and get the new node as the new head node
    return head;
}

void deleteAtBeginning(Node* &head) // function to delete the first node (head) of the linked list
{
    if(head == nullptr) // check if the head itself is null
    {
        return; // end the function call
    }
    Node* temp = head; // have a copy of original head to be deleted
    head = head -> next; // point the current head to the second node
    delete temp; // delete the original head, now that we have assigned the second node as head node
}

void display(Node* head)
{
  if(head == nullptr) // checking if the list is empty
    {
      return;
    }
  Node* current = head; // using a separate pointer for traversing safely
  while(current != nullptr) // traverse until the current node is nullptr that is both data and next fields are null
    {
      cout << current -> data << " "; // print the data on the go
      current = current -> next; // move to the next pointer (without this the program runs forever)
    }
}

//main method
int main()
{
  Node* head = nullptr; // head node initialized to null
  int n;
  cin >> n; // number of nodes
  for(int i=0;i<n;i++)
    {
      int num;
      cin >> num; // getting node element one by one
      insertAtBeginning(head, num); // pass the value as I get to the insert method
    }
    deleteAtBeginning(head); // function call to delete first node
    display(head); // pass head node to display method
}
