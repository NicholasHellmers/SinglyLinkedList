//-----------------------------------------------------------------------------
// C++ Data Structures Cheat Sheet
//
// Identification: singlyLinked.h
//-----------------------------------------------------------------------------

#ifndef SINGLYLINKED_H
#define SINGLYLINKED_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

struct Node
{
	int data;
	Node *next;

	Node() {}
	Node(int dataI) { 
		data = dataI;
		next = nullptr;
	}
};

class SinglyLinked
{
    public:
        SinglyLinked();
        ~SinglyLinked();
        void addNode(int data);
		void deleteNode(int data);
        Node *searchNode(int data);

    private:
		// add helpers here (if needed)
        Node *head;
};

#endif