#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
};

void insertAtFront(int data,Node **head)
{
	Node *temp = NULL;
	temp = new Node;
	temp->data = data;
	temp->next = (*head);

	(*head) = temp;
}

void insertAfter(int data,Node *n)
{
	Node *new_node = NULL;
	new_node = new Node;

	new_node->data = data;
	new_node->next = n->next;
	n->next = new_node;
}

int main()
{
	Node *head = NULL;
	Node *second = NULL;

	head = new Node;
	second = new Node;

	second->data = 2020;
	head->next = second;
	head->data = 20;


	//insertAtFront(2029,&head);

	insertAfter(1999,head);
	
	cout << head->data;
	return 0;
}