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

Node* SinglyLinked:: searchNode(int data) {
    Node *toSearch = head;
    while (toSearch)
    {
        if (toSearch->data == data)
        {
            return toSearch;
        }
    }
    return toSearch;
}

// ADD NODE TO SINGLY LINKED LIST
void SinglyLinked:: addNode(int data) {
    if (searchNode(data))
    {
        cout << "node already exists." << endl;
        return;
    }
    
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

void SinglyLinked:: deleteNode(int data) {
    // Create a toDelete node 
    Node *toDelete = head;

    // Check if you're deleting the head
    if (toDelete->data == data && toDelete == head)
    {
        head = head->next;
        delete toDelete;
        toDelete = nullptr;
        return;
    }
    else // If you're not deleting the head
    {
        Node *previous = nullptr; // Start tracking the prevoius entry
        while(toDelete) {
            if (toDelete->data == data)
            {
                previous->next = toDelete->next;
                delete toDelete;
                toDelete = nullptr;
                return;
            }
            previous = toDelete;
            toDelete = toDelete->next;
        }
    }
    cout << "You're trying to delete a node that doesn't exist." << endl;
}