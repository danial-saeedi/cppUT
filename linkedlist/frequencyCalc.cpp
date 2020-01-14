#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
};

/* Counts the number of occurrences of a node  */
int count(Node *node,int data)
{
	if(node == NULL) return 0;
	if(node->data == data) return 1 + count(node->next,data);

	return count(node->next,data);
}

int main()
{

	Node *head = NULL;
	Node *second = NULL;
	Node *third = NULL;
	Node *fourth = NULL;
	Node *fifth = NULL;

	head = new Node;
	second = new Node;
	third = new Node;
	fourth = new Node;
	fifth = new Node;

	head->data = 20;
	head->next = second;


	second->data = 20;
	second->next = third;

	third->data = 80;
	third->next = fourth;

	fourth->data = 70;
	fourth->next = fifth;

	fifth->data = 70;
	fifth->next = NULL;

	cout << count(head,20);
	return 0;
}

