#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the doubly linked list
// struct Node {
//     int data;
//     struct Node* prev;
//     struct Node* next;
// };

// // Function to traverse and print the doubly linked list
// void traverseDoublyLinkedList(struct Node* head) {
//     struct Node* currentNode = head;

//     while (currentNode != NULL) {
//         printf("%d ", currentNode->data);
//         currentNode = currentNode->next;
//     }
//     printf("\n");
// }

// // Function to insert a new node at the beginning of the doubly linked list
// void insertAtBeginning(struct Node** head, int data) {
//     // Create a new node
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = data;
//     newNode->prev = NULL;
//     newNode->next = *head;

//     // Update the previous pointer of the current head if it exists
//     if (*head != NULL)
//         (*head)->prev = newNode;

//     // Update the head pointer to the new node
//     *head = newNode;
// }

// // Function to delete a node from the doubly linked list
// void deleteNode(struct Node** head, struct Node* nodeToDelete) {
//     // If the node to delete is the head node
//     if (*head == nodeToDelete)
//         *head = nodeToDelete->next;

//     // Update the next pointer of the previous node if it exists
//     if (nodeToDelete->prev != NULL)
//         nodeToDelete->prev->next = nodeToDelete->next;

//     // Update the previous pointer of the next node if it exists
//     if (nodeToDelete->next != NULL)
//         nodeToDelete->next->prev = nodeToDelete->prev;

//     // Free the memory of the node to delete
//     free(nodeToDelete);
// }

// int main() {
//     // Create an empty doubly linked list
//     struct Node* head = NULL;

//     // Insert nodes at the beginning of the doubly linked list
//     insertAtBeginning(&head, 3);
//     insertAtBeginning(&head, 2);
//     insertAtBeginning(&head, 1);

//     // Print the doubly linked list
//     printf("Doubly linked list: ");
//     traverseDoublyLinkedList(head);

//     // Delete the second node from the doubly linked list
//     deleteNode(&head, head->next);

//     // Print the doubly linked list after deletion
//     printf("Doubly linked list after deletion: ");
//     traverseDoublyLinkedList(head);
// }

struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *insert(struct node *,int);
struct node delete(struct node *,int);
void main(){
    struct node *head=NULL;
    struct node *ptr=NULL;
    head=insert(head,1);
    head=insert(head,2);
    delete(head,2);
    ptr=head;
    while(ptr!=NULL){
        printf("%d  ",ptr->data);
        ptr=ptr->next;
    }
}
struct node *insert(struct node *head,int var){
    struct node *p=malloc(sizeof(struct node)),*ptr=head;
    p->data=var;
    p->next=NULL;
    p->prev=NULL;
    if(head==NULL){
        head=p;
    }
    else{
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=p;
        p->prev=ptr;
    }
    return head;
}
struct node delete(struct node *head,int var){
    struct node *p=malloc(sizeof(struct node)),*ptr=head;
    while(ptr->next->data!=var){
        ptr=ptr->next;
    }
    p=ptr->next;
    ptr->next=NULL;
    free(p);
}