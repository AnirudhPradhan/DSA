// #include<stdio.h>
// //void insertionsort(int *,int);
// //void selectionsort(int *,int);
// void main(){
//     int a[]={10,15,34,7,27,11};
//     //insertionsort(a,6);
//     //selectionsort(a,6);
// }
// void print(int *a,int n){
//     for(int i=0;i<n-1;i++){
//         printf("%d  ",a[i]);
//     }
// }
// void swap(int *a,int *b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
// /*
// ...............................insertion sort.................................
// void insertionsort(int*a ,int n){
//     int i,j,item;
//     for(i=1;i<=n-1;i++){
//         item=a[i];
//         j=i-1;
//         while(j>=0 && a[j]>item){
//             a[j+1]=a[j];
//             j--;
//         }
//         a[j+1]=item;
//     }
//     for(i=0;i<n;i++){
//         printf("%d  ",a[i]);
//     }
// }
// .................................selection sort.....................................
// void selectionsort(int *a,int n){
//     int i,j,temp;
//     for(i=0;i<n;i++){
//         temp=i;
//         for(j=i+1;j<n-1;j++){
//             if(a[temp]>a[j])
//             temp=j;
//         }
//         swap(&a[i],&a[temp]);
//     }
//     print(a,n);
// }
// Queue:- It is a linear data structure where elements are inserted from one end and deleted from other end.
// Uses last in first out(LIFO) method.Two specially designated pointer called Front and Rear are used. It
// can be implemented using array and linked list.

// Stack:- Stack is liner data structure where elements and inserted and deleted from the same end. It 
// follows first in first out(FIFO) method. It uses a specially designated top which points to the last 
// element of the stack.
// 
/*
#include<stdio.h>
#include<stdlib.h>

struct node {
    float coef;
    int expo;
    struct node *next;
};

struct node* insert(struct node*, float, int);
void print(struct node*);

int main() {
    struct node *head = NULL;
    head = insert(head, 5, 3);
    print(head);
    return 0;
}

struct node* insert(struct node *head, float co, int ex) {
    struct node *ptr = head;
    struct node *p = malloc(sizeof(struct node));
    p->coef = co;
    p->expo = ex;
    p->next = NULL;

    if (head == NULL) {
        head = p;
    } else {
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = p;
    }
    return head;
}

void print(struct node *head) {
    struct node *ptr = head;
    while (ptr != NULL) {
        printf("%fx^%d   ", ptr->coef, ptr->expo);
        ptr = ptr->next;
        if (ptr != NULL) {
            printf("+ ");
        }
    }
}
*/
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

struct node* insert(struct node *head, int var);

int main() {
    struct node *head = NULL;
    head = insert(head, 1);
    head = insert(head, 2);

    struct node *ptr = head;
    while (ptr != NULL) {
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    }

    return 0;
}

struct node* insert(struct node *head, int var) {
    struct node *p = malloc(sizeof(struct node));
    p->data = var;
    p->next = NULL;
    p->prev = NULL;

    if (head == NULL) {
        head = p;
    } else {
        struct node *ptr = head;
        while (ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = p;
        p->prev = ptr;
    }

    return head;
}


