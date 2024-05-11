#include <iostream>
using namespace std;

struct Node {

	int value;
	struct Node* right;
	struct Node* left;
};



Node *empty_node(int value) {

	Node *root_node = (Node *)malloc(sizeof(Node));
	root_node->value = value;
	root_node->left = NULL;
	root_node->right = NULL;

	return root_node;
}



Node *insert(Node *root_node, int input_value) {

	if (root_node == NULL) { return empty_node(input_value); } 
	
	if (input_value < root_node->value) {
			root_node->left = insert(root_node->left, input_value);
	} else {
			root_node->right = insert(root_node->right, input_value);
	}
	
	return root_node;
}



void print_in_order(Node *root) {
	
	if (root != NULL) {
		print_in_order(root->left);
		std::cout << root->value << " " << std::endl;
		print_in_order(root->right);
	}
}



int main() {

	Node *root = NULL;

	root = insert(root, 8);
    root = insert(root, 2);
    root = insert(root, 17);
    root = insert(root, 3);
	root = insert(root, 15);
	root = insert(root, 9);
	root = insert(root, 11);
	root = insert(root, 19);
	root = insert(root, 4);
	root = insert(root, 16);
	root = insert(root, 12);

	std::cout << "Print: " << std::endl;
	print_in_order(root);


	return 0;
}