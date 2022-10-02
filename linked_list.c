#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

struct node {
	int val;
	struct node *next;
}; 

void print_all(struct node *head) {
	while( head != NULL ){
		printf("Value: %d\n", head->val);
		head = head->next;
	}
}

struct node * allocate_nodes(int num_nodes) {
	char hello[13] = "Hello World #";
	struct node* head;
	struct node* og_head;
	head = (struct node*)malloc( sizeof(struct node));
	og_head = head; 
	for(int i = 0; i < num_nodes; ++i) {
		if(i == num_nodes - 1) {
			head->val = i;
			head->next = NULL;
			return (og_head);
		}
		head->val = i;
		head->next = malloc(sizeof(struct node));
		head = head->next;
	}
	return NULL;
}

void delete_all(struct node* head) {
	struct node* tmp;

	char goodbye[15] = "Goodbye World #";
	while(head != NULL) {
		printf("%s%d\n", goodbye, head->val);
		tmp = head;
		head = head->next;
		free(tmp);
	}

}
 
void main(int argc, char** argv) {\

	printf("How many nodes?: ");
	int k;
	scanf("%d", &k);
	struct node *head;
	head = allocate_nodes(k);
	print_all(head);
	delete_all(head);

}