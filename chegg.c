#include <stdio.h>
#include <stdlib.h>

/* a node of the doubly linked list */
struct Node
{
int data;
struct Node *next;
struct Node *prev;
};
int isDisjoint(struct Node* head1,struct Node* head2) 
{ 
        struct Node* t1 = head1; 

        // Traverse list1 and search each element of it in 
        // list2. If the element is present in list 2, then 
        // return false
        int x=fun(t1,head2);
        while (t1 != NULL) { 
                if (isPresent(head2, t1->data)) 
                        return 0; 
                t1 = t1->next; 
        } 
        //if no elements in common return true
        return 1; 
} 
int fun(struct Node* t1,struct Node* head2
)
{
    int ans;
    ans=isPresent(head2,t1->data);
    if(ans==1)
        return 1;
    return fun(t1->next,head2)

    
}

/* A utility function that returns true if data is 
present in linked list else return false */
int isPresent(struct Node* head, int data) 
{ 
        struct Node* t = head; 
        while (t != NULL) { 
                if (t->data == data) 
                        return 1; 
                t = t->next; 
        } 
        return 0; 
} 
/* Function to reverse a Doubly Linked List */
void reverse(struct Node **head_ref)
{
	struct Node *temp = NULL;
	struct Node *current = *head_ref;
	
	/* swap next and prev for all nodes of
	doubly linked list */
	while (current != NULL)
	{
	temp = current->prev;
	current->prev = current->next;
	current->next = temp;			
	current = current->prev;
	}	
	
	/* Before changing head, check for the cases like empty
		list and list with only one node */
	if(temp != NULL )
		*head_ref = temp->prev;
}	



/* UTILITY FUNCTIONS */
/* Function to insert a node at the beginning of the Doubly Linked List */
void push(struct Node** head_ref, int new_data)
{
	/* allocate node */
	struct Node* new_node =
			(struct Node*) malloc(sizeof(struct Node));

	/* put in the data */
	new_node->data = new_data;
	
	/* since we are adding at the beginning,
	prev is always NULL */
	new_node->prev = NULL;

	/* link the old list off the new node */
	new_node->next = (*head_ref);

	/* change prev of head node to new node */
	if((*head_ref) != NULL)
	(*head_ref)->prev = new_node ;

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}

/* Function to print nodes in a given doubly linked list
This function is same as printList() of singly linked list */
void printList(struct Node *node)
{
while(node!=NULL)
{
printf("%d ", node->data);
node = node->next;
}
}

/* Driver code*/
int main()
{
/* Start with the empty list */
struct Node* head = NULL;

/* Let us create a sorted linked list to test the functions
Created linked list will be 10->8->4->2 */
push(&head, 2);
push(&head, 4);
push(&head, 8);
push(&head, 10);

printf("\nOriginal Linked list ");
printList(head);

/* Reverse doubly linked list */
reverse(&head);

printf("\nReversed Linked list ");
printList(head);		

getchar();
}
