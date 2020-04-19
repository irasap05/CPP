#pragma once
#include "Node.h"

class List
{
public:
	// fields
	Node* head;
	int length;

	// constructor
	List();

	// methods
	void add(int data);

	void cycleShiftRight();

	void print();
};

