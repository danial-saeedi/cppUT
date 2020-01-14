#include <iostream>
#include <cmath>
using namespace std;

struct Node
{
	int data;
	Node *next;
};

int countNodes(Node *node)
{
	if(node == NULL) return 0;

	return countNodes(node->next) + 1;
}

int intersection(Node *linkedlist1,Node *linkedlist2)
{
	int c1 = countNodes(linkedlist1);
	int c2 = countNodes(linkedlist2);
	int d = abs(c1-c2);

	Node *pointer1 = linkedlist1;
	Node *pointer2 = linkedlist2;

	if(c1 > c2)
	{
		int n = 0;
		while(n < d)
		{
			pointer1 = pointer1->next;
			n++;
		}
	}else if(c2 > c1){
		int n = 0;
		while(n < d)
		{
			pointer2 = pointer2->next;
			n++;
		}
	}

	int intersection = -1;
	while(pointer1 != NULL && pointer2 != NULL)
	{
		if(pointer1 == pointer2)
		{
			intersection = pointer1->data;
			break;
		}

		pointer1 = pointer1->next;
		pointer2 = pointer2->next;
	}

	return intersection;
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


	second->data = 30;
	second->next = third;

	third->data = 40;
	third->next = fourth;

	fourth->data = 50;
	fourth->next = fifth;

	fifth->data = 60;
	fifth->next = NULL;

	Node *head2 = NULL;

	head2 = new Node;

	head2->data = 1001;
	head2->next = fourth;

	cout << intersection(head,head2);
	return 0;
}