#include<stdio.h>
#include<stdlib.h>
struct tree {
	int value;
	struct tree *left,*right;
};

struct stack {
	int value;
	struct stack *back;
};

void push(struct stack **top, int value) {
	struct stack *node = (struct stack*) malloc(sizeof(struct stack));
	node->back = *top;
	node->value = value;
	*top = node;
}

int pop(struct stack **top) {
	int value;
	if(*top != NULL) {
		value = (*top)->value;
		*top = (*top)->back;
		return value;
	}
	else {
		printf("Stack is empty");
		return -1;
	}
}

int is_empty(struct stack *top) {
	if(top == NULL) {
		return 1;
	}
	else {
		return 0;
	}
}

void print_stack(struct stack *top) {
	if(top != NULL) {
		printf("%d  ",top->value);
		print_stack(top->back);
	}
}

void print_tree(struct tree *node) {
	if(node != NULL) {
		printf("%d   ",node->value);
		print_tree(node->left);
		print_tree(node->right);
	}
}

struct tree *traverse_to_node(struct tree *root,int position) {
	if (root == NULL) {
		return NULL;
	}
	int i=position;
	struct stack *tree_nodes;
	while (i > 3) {
		i = i / 2;
		push(&tree_nodes, i);
	}
	//printf("\n");
	//print_stack(tree_nodes);
	int num;
	struct tree *node=root;
	while(!is_empty(tree_nodes)) {
		num = pop(&tree_nodes);
		if (num % 2 == 0) {
			node = node->left;
		}
		else {
			node = node->right;
		}
	}
	//printf("%d",node->value);
	if (position % 2 == 0) {
		node->left = (struct tree*) malloc(sizeof(struct tree));
		node = node->left;
	}
	else {
		node->right = (struct tree*) malloc(sizeof(struct tree));
		node = node->right;
	}
	node->left = NULL;
	node->right = NULL;
	return node;
}

int check_symmetric(struct tree *node1, struct tree * node2) {
	if (node1 != NULL && node2 == NULL) {
		return 0;
	}
	if (node1 == NULL && node2 != NULL) {
		return 0;
	}
	if (node1 == NULL && node2 == NULL) {
		return 1;
	}
	if (!check_symmetric(node1->left, node2->right)) {
		return 0;
	}
	if(!check_symmetric(node1->right, node2->left)) {
		return 0;
	}
	if (node1 != NULL && node2 != NULL) {
		if (node1->value == node2->value) {
			return 1;
		}
		else {
			return 0;
		}
	}
}

int is_symmetric(struct tree *root) {
	struct tree *node;
	node = root;
	if (check_symmetric(root->left, root->right)) {
		return 1;
	}
}



int main() {
	int num_node=0,i;
	//printf("Enter number of nodes :");
	scanf("%d",&num_node);
	struct tree *root=NULL,*node=NULL;
	//printf("Enter position in increasing order");
	int position,value,parent;
	struct stack *tree_traverse;
	for(i=0;i<num_node;i++) {
		//printf("Enter position and value :");
		scanf("%d %d",&position,&value);
		if(root == NULL) {
			if(position == 1) {
				root = (struct tree*) malloc(sizeof(struct tree));
				root->value = value;
				root->left = NULL;
				root->right = NULL;
			}
			else {
				printf("First specify root node");
				break;
			}
		}
		else {
			node = traverse_to_node(root,position);
			node->value = value;
		}	
	}
	print_tree(root);
	printf("\n");
	if (is_symmetric(root)) {
		printf("The tree is symmetric");
	}
	else {
		printf("The tree is not symmetric");
	}
	return 0;
}
