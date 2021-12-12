#include "singlyLinked.h"

#include <iostream>

using namespace std;

// CONSTRUCT SINGLY LINKED LIST
SinglyLinked:: SinglyLinked() {
    head = nullptr;
}

// DESTROY SINGLY LINKED LIST
SinglyLinked:: ~SinglyLinked() {
    Node *temp = head;
    while(head) {
        head = temp->next;
        delete temp;
        temp = head;
    }
}

// ADD NODE TO SINGLY LINKED LIST
void SinglyLinked:: addNode(int data) {
    Node *toInsert = new Node(data);
    // This just adds it to the front of the list
    toInsert->next = head;
    head = toInsert;
    
    /*

    // If I wanted order it depending value
    Node *temp = head;
    while(temp) {
        if( data > temp->data && data < temp->next->data \\ temp->next == nullptr ) { // Don't think this will work, but trying to get this concise
            toInsert->next = temp->next;
            temp->next = toInsert;
        }
    } 

    */
}