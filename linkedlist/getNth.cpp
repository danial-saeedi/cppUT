#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
};

int getNth(Node *linkedlist, int n)
{
	//-1 means it doesn't exist
	if(linkedlist == NULL) return -1;

	if(n == 1) return linkedlist->data;

	return getNth(linkedlist->next,n-1);
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


	second->data = 70;
	second->next = third;

	third->data = 20;
	third->next = fourth;

	fourth->data = 70;
	fourth->next = fifth;

	fifth->data = 70;
	fifth->next = NULL;
	
	
	cout << getNth(head,2);
	return 0;
}