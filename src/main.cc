#include <iostream>
using namespace std;

struct Node {

	int value;
	struct Node* right;
	struct Node* left;
};



void insert(Node *root_node, int input_value) {

	if (root_node == NULL) {
		root_node = new Node();
		root_node->left = NULL;
		root_node->right = NULL;
		root_node->value = input_value;

	} else {

		if (input_value < root_node->value) {
			insert(root_node->left, input_value);
		} else {
			insert(root_node->right, input_value);
		}
	}
}



void print_in_order(Node *root){
    if(root != NULL){

        print_in_order(root->left);
        std::cout << " " << root->value << std::endl;
        print_in_order(root->right);
    } else {
		std::cout << "root e NULL" << std::endl;
	}
}



int main() {

	Node *root = NULL;

	insert(root, 10);
    insert(root, 20);
    insert(root, 30);
    insert(root, 40);

	std::cout << "Print: " << std::endl;
	print_in_order(root);


	return 0;
}