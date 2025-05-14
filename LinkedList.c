#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Structure to represent the 
// singly linked list
struct Node {
  
  // Data field - can be of 
  // any type and count
  int data;
  
  // Pointer to the next node
  struct Node* next;
}