#include <iostream>
using namespace std;

struct Node {

	int value;
	struct Node *right;
	struct Node *left;
};
typedef struct Node Node;


void create_tree(Node **root_node) {

	*root_node = NULL;
}


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


int main() {

	

	return 0;
}