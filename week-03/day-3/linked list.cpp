//============================================================================
// Name        : linked.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// Linked list

// Implement a linked list using structs that stores doubles A struct called Node should represent one node in the list.
// The linked lists should stored by a pointer that points to it's head.

struct Node {
  double data;
  Node* next;
};

Node* list_construct_one(double value);
unsigned int list_length(Node& head);
Node* list_get_last(Node& head);
void list_append(Node& head, double value);
Node* list_at(Node& head, unsigned int index);
//void list_insert(Node& head, unsigned int index, double value);
//unsigned int list_find(Node& head, double value);
//void list_remove(Node& head, double value);
void list_concat(Node& head, Node& other_list);

int main() {
  double a = 5;
  Node* head = list_construct_one(a);
  cout << "Length of the list is: " << list_length(*head) << endl;
  cout << "Value of the head node is: " << head->data << endl;
  list_append(*head, 10);
  list_append(*head, 5.8);
  list_append(*head, 120);
  list_append(*head, 120);
  list_append(*head, 5.8);
  cout << "Length of the list with the added values is: " << list_length(*head) << endl;
  list_get_last(*head);
  cout << "At index 4 the value of the pointer is: "<< list_at(*head, 4) << endl;
  Node* head2 = list_construct_one(a);
  list_concat(*head, *head2);
  cout << "Size of the concated list is: " << list_length(*head);
  delete head;
  delete head2;
  return 0;
}
// Construct One
// It should set the next element to nullptr
// It should set it's value

Node* list_construct_one(double value) {
  Node* new_node = new Node;
  new_node->data = value;
  new_node->next = nullptr;
  return new_node;
}

// Length
// It should return the size of the list

unsigned int list_length(Node& head) {
  Node* temp = &head;
  unsigned int counter = 0;
  while (temp != 0) {
    temp = temp->next;
    counter++;
  }
  return counter;
}

// Get Last
// It should return the last node

Node* list_get_last(Node& head) {
  Node* temp = &head;
  Node* last_node;
  while (temp != nullptr) {
    last_node = temp;
    temp = temp->next;
  }
  return last_node;
}

// Append
// It should append a new node to the end of the list with the given value

void list_append(Node& head, double value) {
  Node* new_node = list_construct_one(value);
  Node* last_node = list_get_last(head);
  last_node->next = new_node;
}

// At
// It should return the node with the given index counted from it's head

Node* list_at(Node& head, unsigned int index) {
  Node* temp = &head;
  for (unsigned int i = 0; i <= index; i++) {
    temp = temp->next;
  return temp;
  }
}

// Insert
// It should insert a node to the given index

//void list_insert(Node& head, unsigned int index, double value)

// Find
// It should return the index of the given value

//unsigned int list_find(Node& head, double value)

// Remove
// It should remove the node with the given value

//void list_remove(Node& head, double value)

// Concat
// It should concat the other list to the and of the list

void list_concat(Node& head, Node& other_list) {
  Node* last_node_of_list1 = list_get_last(head);
  last_node_of_list1->next = &other_list;
}
