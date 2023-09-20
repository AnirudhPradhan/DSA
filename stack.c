#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *top=NULL;
void push(int);
void pop();
void main(){
    struct node *p=malloc(sizeof(struct node)),*ptr=NULL;
    top=p;
    p->data=5;
    p->next=NULL;
    push(16);
    push(17);
    pop();
    ptr=top;
    while(ptr!=NULL){
        printf("%d  ",ptr->data);
        ptr=ptr->next;
    }
}
void push(int val){
    struct node *a=malloc(sizeof(struct node));
    a->data=val;
    a->next=top;
    top=a;
}
void pop(){
    struct node *a=malloc(sizeof(struct node));
    a=top;
    top=top->next;
    free(a);
}