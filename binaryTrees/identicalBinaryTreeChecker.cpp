#include <iostream>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
};

struct Node* newNode(int data)
{
	struct Node *temp = new Node;
	temp->data = data;

	temp->left = NULL;
	temp->right = NULL;

	return temp;
}

//My answer to this problem
bool isIdentical(Node *tree1,Node *tree2)
{
	if(tree1 == NULL && tree2 == NULL) return true;
	if(tree1->data != tree2->data){
		return false;
	}

	bool identical;
	identical = isIdentical(tree1->left,tree2->left);
	identical = isIdentical(tree1->right,tree2->right);

	return identical;
}
int main()
{

	//Test case
	Node *tree1 = NULL;

	tree1 = newNode(20);

	tree1->left = newNode(40);
	tree1->right = newNode(60);

	tree1->left->left = newNode(1000);
	tree1->left->right = newNode(10002);

	Node *tree2 = NULL;

	tree2 = newNode(20);

	tree2->left = newNode(40);
	tree2->right = newNode(60);

	tree2->left->left = newNode(10000);
	tree2->left->right = newNode(10002);

	cout << isIdentical(tree1,tree2);

	return 0;
}