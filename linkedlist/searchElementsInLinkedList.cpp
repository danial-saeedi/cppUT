#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
};

bool searchElementRecursively(Node *n,int data)
{
    //Base Case
    if(n == NULL) return false;
    if(n->data == data) return true;
    
    //Recursive Case
    return searchElementRecursively(n->next,data);
}

int main()
{
	Node *head = NULL;
	Node *second = NULL;
	Node *third = NULL;
	Node *fourth = NULL;

	head = new Node;
	second = new Node;
	third = new Node;
	fourth = new Node;

	head->data = 20;
	head->next = second;


	second->data = 20;
	second->next = third;

	third->data = 20;
	third->next = fourth;

	fourth->data = 70;
	fourth->next = NULL;
	
	
	cout << searchElementRecursively(head,20);
	return 0;
}