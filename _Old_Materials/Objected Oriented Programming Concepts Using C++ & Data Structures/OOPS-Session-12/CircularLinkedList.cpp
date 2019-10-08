#include<iostream>

using namespace std;



class Node {
  public:
  int data;
  //pointer to the next Node
  Node* next;
  
  Node() {
    data = 0;
    next = NULL;
  }
  
  Node(int x) {
    data = x;
    next = NULL;
  }
}; 

class CircularLinkedList {
  public:
  Node *head;
  //declaring the functions
  
  //function to add Node at front
  int addAtFront(Node *n);
  //function to check whether Linked list is empty
  int isEmpty();
  //function to add Node at the End of list
  int addAtEnd(Node *n);
  //function to search a value
  Node* search(int k);
  //function to delete any Node
  Node* deleteNode(int x);
  
  CircularLinkedList() {
    head = NULL;
  }

   Node*  getLastNode() ;
};

/* -====================================
Insertion at the Beginning
Steps to insert a Node at beginning :

The first Node is the Head for any Linked List.

When a new Linked List is instantiated, it just has the Head, which is Null.

Else, the Head holds the pointer to the fisrt Node of the List.

When we want to add any Node at the front, we must make the head point to it.

And the Next pointer of the newly added Node, must point to the previous Head, 
    whether it be NULL(in case of new List) or the pointer to the first Node of the List.

The previous Head Node is now the second Node of Linked List, because the
 new Node is added at the front.


 */

int CircularLinkedList :: addAtFront(Node *n) {
  int i = 0;
  /* If the list is empty */
  if(head == NULL) {
    n->next = head;
    //making the new Node as Head
    head = n;
    i++;
  }
  else {
    n->next = head;
    //get the Last Node and make its next point to new Node
    Node* last = getLastNode();
    last->next = n;
    //also make the head point to the new first Node
    head = n;
    i++;
  }
  //returning the position where Node is added
  return i;
}

/* =======================================

Insertion at the End

Steps to insert a Node at the end :

If the Linked List is empty then we simply, add the new Node as the Head of the Linked List.

If the Linked List is not empty then we find the last Node, and make it' 
next to the new Node, and make the next of the Newly added Node point to the Head of the List.

 */

int CircularLinkedList :: addAtEnd(Node *n) {
  //If list is empty
  if(head == NULL) {
    //making the new Node as Head
    head = n;
    //making the next pointer of the new Node as Null
    n->next = NULL;
  }
  else {
    //getting the last Node
    Node *last = getLastNode();
    last->next = n;
    //making the next pointer of new Node point to head
    n->next = head;
  } 
}

Node* CircularLinkedList :: getLastNode() {
  //creating a pointer pointing to Head
  Node* ptr = head;
  //Iterating over the list till the Node whose Next pointer points to null
  //Return that Node, because that will be the last Node.
  while(ptr->next!=NULL) {
    //if Next is not Null, take the pointer one step forward
    ptr = ptr->next;
  }
  return ptr;
}

/* ===============================================

Searching for an Element in the List
In searhing we do not have to do much, we just need to traverse like 
we did while getting the last Node, in this case we will also compare the data of the Node. If we get the
 Node with the same data, we will return it, otherwise we will make our
  pointer point the next Node, and so on.
   */


  Node* CircularLinkedList :: search(int x) {
  Node *ptr = head;
  while(ptr != NULL && ptr->data != x) {
    //until we reach the end or we find a Node with data x, we keep moving
    ptr = ptr->next;
  }
  return ptr;
}

/*======================================
Deleting a Node from the List
Deleting a Node can be done in many ways, like we first search the Node with 
data which we want to delete and then we delete it. In our approach, we will define 
a method which will take the data to be deleted as argument, will use the search method to 
locate it and will then remove the Node from the List.

To remove any Node from the list, we need to do the following :

If the Node to be deleted is the first Node, then simply set the Next
pointer of the Head to point to the next element from the Node to be deleted.
 And update the next pointer of the Last Node as well.

If the Node is in the middle somewhere, then find the Node before it, and make the Node
 before it point to the Node next to it.

If the Node is at the end, then remove it and make the new last Node point to the head.


 */


Node* CircularLinkedList :: deleteNode(int x) {
  //searching the Node with data x
  Node *n = search(x);
  Node *ptr = head;
  if(ptr == NULL) {
    cout << "List is empty";
    return NULL;
  }
  else if(ptr == n) {
    ptr->next = n->next;
    return n;
  }
  else {
    while(ptr->next != n) {
      ptr = ptr->next;
    }
    ptr->next = n->next;
    return n;
  }
}