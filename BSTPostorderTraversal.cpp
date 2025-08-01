#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  Node* left;
  Node* right;
  Node(int val)
  {
    data = val;
    left = nullptr;
    right = nullptr;
  }
};

Node* insert(Node* root, int val)
{
  Node* newNode = new Node(val);
  if(root == nullptr)
  {
      return newNode;
  }
  else if(val < root -> data)
  {
    root -> left = insert(root -> left, val);
  }
  else if(val > root -> data)
  {
    root -> right = insert(root -> right, val);
  }
  return root;
}

void display(Node* root)
{
  if(root == nullptr)
  {
      return;
  }
  display(root -> left);
  display(root -> right);
  cout << root -> data << " ";
}

int main()
{
  Node* root = nullptr;
  int num;
  cin >> num;
  for(int i = 0; i < num; i++)
    {
      int ele;
      cin >> ele;
      root = insert(root , ele);
    }
  display(root);
}
