#include <iostream>
using namespace std;

struct Node {

	int value;
	struct Node *right;
	struct Node *left;
};
typedef struct Node Node;



void insert(Node **root_node, int input_value) {

	if (*root_node == NULL) {

		*root_node = (Node *)malloc(sizeof(Node));
		(*root_node)->left = NULL;
		(*root_node)->right = NULL;
		(*root_node)->value = input_value;

	} else {

		if (input_value < ((*root_node)->value)) {
			insert(&((*root_node)->left), input_value);
		} else {
			insert(&((*root_node)->right), input_value);
		}
	}
}

void inorderTraversal(Node* root) {
    if (!root)
        return;
    inorderTraversal(root->left);
    std::cout << root->value << " " << std::endl;
    inorderTraversal(root->right);
}


int main() {

	Node **root = NULL;

	insert(root, 10);
	insert(root, 20);
	insert(root, 30);
	insert(root, 40);
	insert(root, 50);
	insert(root, 60);
	insert(root, 70);

	std::cout << "Print: " << std::endl;
	inorderTraversal(*root);



	return 0;
}