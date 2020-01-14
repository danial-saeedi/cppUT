#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
};

int countNodesRecursively(Node *n)
{
    //Base Case
    if(n == NULL) return 0;
    
    return 1+countNodesRecursively(n->next);
}

int countNodesIteratively(Node *n)
{
    int count = 0;
    
    while (n != NULL)
    {
        count++;
        n = n->next;
    }
    
    return count;
}

int main()
{
	Node *head = NULL;
	Node *second = NULL;
	Node *third = NULL;

	head = new Node;
	second = new Node;
	third = new Node;

	head->data = 20;
	head->next = second;

	second->data = 30;
	second->next = third;

	third->data = 40;
	third->next = NULL;
	
	//cout << countNodesRecursively(head);
	
	cout << countNodesIteratively(head);
	return 0;
}