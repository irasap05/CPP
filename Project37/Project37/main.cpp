#include <iostream>
#include "Node.h"

using namespace std;

int main()
{
	Node* head = new Node;
	Node* temp = head;
	for (int i = 1; i <= 10; ++i)
	{
		temp->data = i;
		temp->next = new Node;
		temp = temp->next;
	}
	temp = head;
	for (int i = 1; i <= 10; ++i)
	{
		cout << temp->data;
		temp = temp->next;
	}
	return 0;
}