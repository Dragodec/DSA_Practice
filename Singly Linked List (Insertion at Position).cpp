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
 
int sizeOfLinkedList(Node* head) // function definition of calculate the linked list size and return it
{
    int sizell = 0; // variable that stores the size
    Node* current = head; // temporary variable for traversing safely
    while(current != nullptr) // traversal condition and when to stop
      {
          sizell++; // increment the size
          current = current -> next; // move forward by one node on each iteration
      }
    return sizell; // return the calculated size
}

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

Node* insertAtEnd(Node* &head, int num) // pass head as reference so as to reflect changes back in main method, as well as value to be inserted
{
  Node* newNode = new Node(num); // using Node's constructor to initialize the new node's data
    if(head == nullptr) // checking if the head or the first node itself is empty
    {
      head = newNode; // if empty assign new node as first node
      return head;
    }
  Node* current = head; // create an copy of head to traverse to the last node
    while(current -> next != nullptr) // traverse until current node' next doesn't point to null
      {
        current = current -> next; // move front on each iteration
      }
    current -> next = newNode; // assign the current's next as new node
    return head; // return head
}

Node* insertAtPosition(Node* &head, int num, int pos, int sizell) // function to insert an element at any position from start to end, takes parameters (head, value to be inserted, position to insert, and size of linked list to validate)
{
    Node* newNode = new Node(num); // creation of new node via invoking struct's constructor
    if(pos == 0) // condition to insert at beginning
    {
        head = insertAtBeginning(head, num);
    }
    else if(pos == sizell) // condition  to insert at end
    {
        head = insertAtEnd(head, num);
    }
    else // insert at position snippet
    {
        int index = 0; // index to keep track of current node
        Node* current = head; // creating temporary node for safety
        while(index < pos - 1) // condition to traverse until pos - 1 , because only then can we reassign links to new node and exisiting nodes
        {
            current = current -> next; // moving to next node
            index ++; // increment index count for tracking and loop termination
        }
        Node* temp = current -> next; // now temp is another temporary node that we have created to store the current node's next address
        current -> next = newNode; // now that we have the copy of other node assign the current node's next to new node
        newNode -> next = temp; // new node shall point to the old node in its place before insertion
    }
    return head; // return head
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
      insertAtEnd(head, num); // pass the value as I get to the insert method
    }
  int sizell = sizeOfLinkedList(head); // stores size of the linked list
  int num; // variable to get the value of the new node to be inserted
  cin >> num;
  int pos; // variable to get the position in which the new node will be inserted
  cin >> pos;
  if(pos > sizell) // check if the position exceeds current size of list
  {
      cout << "Invalid position";
      return 0; // end program 
  }
  insertAtPosition(head, num, pos, sizell); // if all ok, then proceed on with insertion
  display(head); // pass head node to display method
}
