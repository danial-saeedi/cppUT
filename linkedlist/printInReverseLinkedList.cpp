#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
};

void pirntInReverse(Node *head)
{
    if(head == NULL) return;
    pirntInReverse(head->next);
    
    cout << head->data;
}

int main()
{
	Node *head = NULL;

	head = new Node;

	Node *second = NULL;

	second = new Node;

	head->data = 20;
	head->next = second;
	second->data = 30;
	
	
	Node *third = NULL;
    third = new Node;
    third->data = 40;
	third->next = NULL;
	
	second->next = third;
	pirntInReverse(head);

	Node *temp = head;

	while(temp != NULL)
	{
		cout << temp->data << endl;
		temp = temp->next;
	}
}