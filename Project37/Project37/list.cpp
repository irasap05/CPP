#include "list.h"
#include <iostream>

using namespace std;

List::List()
{
	this->head = nullptr;
	this->length = 0;
}

void List::add(int const data)
{
	if (this->head == nullptr)
	{
		head = new Node(data);
		++length;
		return;
	}

	Node* temp = this->head;
	while (temp->next != nullptr)
	{
		temp = temp->next;
	}
	temp->next = new Node(data);
	++length;
}

void List::print()
{
	Node* temp = this->head;
	while (temp->next != nullptr)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << temp->data << endl;
}

void List::cycleShiftRight()
{
	Node* preLast = this->head;
	while (preLast->next->next != nullptr)
	{
		preLast = preLast->next;
	}
	Node* last = preLast->next;
	Node* second = this->head;
	this->head = last;
	this->head->next = second;
	preLast->next = nullptr;
}