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
  display(head); // pass head node to display method
}
